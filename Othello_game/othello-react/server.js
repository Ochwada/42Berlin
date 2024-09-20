const express = require('express');
const path = require('path');

const app = express();

// Serve static files from the React app (build folder)
app.use(express.static(path.join(__dirname, 'build')));

// Serve .wasm files with correct MIME type
app.use((req, res, next) => {
  if (req.url.endsWith('.wasm')) {
    res.setHeader('Content-Type', 'application/wasm');
  }
  next();
});

// All other requests should return the React app
app.get('*', (req, res) => {
  res.sendFile(path.join(__dirname, 'build', 'index.html'));
});

// Set the port to listen on
const port = process.env.PORT || 4000; // Change to a different port
app.listen(port, () => {
  console.log(`Server running on port ${port}`);
});



#include <stdio.h>
#include "header.h"

// Function to calculate the height of the tree in inches
double calculate_tree_height(
                             double shorty,
                             double shorty_to_lofty,
                             double lofty_to_tree,
                             double lofty)
                            {
        double tree_height = shorty + ((shorty_to_lofty + lofty_to_tree) * (lofty - shorty)) / shorty_to_lofty;
        return tree_height;
}

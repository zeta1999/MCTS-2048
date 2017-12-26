#pragma once

/******************************************
 * Project: MCT-TFE
 * File: TFE.hpp
 * By: ProgrammingIncluded
 * Website: ProgrammingIncluded.github.io
*******************************************/

#include <vector>
#include <utility>
#include <cstdlib>
#include <random>

#include "config.hpp"
#include "grid_util.hpp"
#include "types_macros.hpp"

// Note, the line between TFE and grid_util
// is slightly more blurry. Can be done
// more clearly. Add as TODO?
class TFE {
    // Save grid as 1d array.
    uint *grid;

    public:
        TFE();
        ~TFE();

        uint *getGrid() { return grid; }

        // Display the grid.
        void display();

        // Move the grid.
        void move(char dir);

        // Add a new item. True if successful.
        bool putNew();

        // Move All Directions and Return Results.
        std::vector<std::pair<char, uint *>> availDir();

        // Check if win. Linear to grid size.
        bool isWin();

        // Check if lose. WARNING: Is costly.
        // Since negation of NP-HARD check.
        // Don't use as much as possible.
        bool isLose();
};
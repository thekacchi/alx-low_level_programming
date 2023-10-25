#!/usr/bin/python3
"""This module contains a function definition"""

def island_perimeter(grid):
    """
    This function returns the perimeter of an island described in the grid
    
    Args:
    grid (List[List[int]]): A list of lists representing the island grid

    Returns: (int) the perimeter of the island
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter

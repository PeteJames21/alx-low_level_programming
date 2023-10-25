#!/usr/bin/python3
"""
Defines a function for measuring the perimeter of an island.
"""


def island_perimeter(grid):
    """Calculate the perimiter of an island.

    :param grid: a list of integers representing an island.
    :return: the perimeter of the island
    """
    width = len(grid[0])
    height = len(grid)
    n_edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    n_edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    n_edges += 1
    return size * 4 - n_edges * 2

#!/usr/bin/python3
"""
Interview prep question island perimeter
"""


def island_perimeter(grid):
    """
    Function to return the perimeter
    Arguments:
    grid -a matrix of 1's
    """
    l = 1
    w = 0
    perimeter = 0
    for y, y_axis in enumerate(grid):
        for x, x_axis in enumerate(y_axis):
            if x_axis == l:
                if x == w or grid[y][x-1] == w:
                    perimeter += 1
                if y == w or grid[y-1][x] == w:
                    perimeter += 1
                if x + 1 == len(y_axis) or grid[y][x+1] == w:
                    perimeter += 1
                if y + 1 == len(grid) or grid[y+1][x] == w:
                    perimeter += 1
    return perimeter

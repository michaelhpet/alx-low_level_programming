#!/usr/bin/python3
"""Island perimeter."""


def island_perimeter(grid):
    """Calculate the perimeter of an island.

    Args:
        grid (list): A list of lists of integers
    """
    rows = [row for row in grid if 1 in row]
    length = len(rows)
    width = max([sum(x) for x in rows])
    return 2 * (length + width)

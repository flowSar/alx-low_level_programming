#!/usr/bin/python3
"""
    island_perimeter id module for calclating perimeter
    of the island described in grid
    and he has one function  for the job
"""


def island_perimeter(grid):
    """
        this is the function thet will calculate the perimeter
        of the island described in grid
        how this function workd it traveld trough all the grid and store
        the index of each land zone in a list.
        after that we check if the land zone connect to each other
        the first and last land zone will have perimeter = 3 ad between the two
        will have perimeter= 2
        if we found the our island is not connected we break the loop and
        return the perimeter of the first island
        Args:
            grid: island
        Return:
            perimeter of the island
    """

    perimeter = 0
    island = []
    j = 0
    k = 0
    for lst in grid:
        j += 1
        for i in lst:
            k += 1
            if i == 1:
                island += [k]
        k = 0

    if len(island) == 1:
        return 4;
    i = 0
    first = 0
    last = len(island) - 1
    for p in island:
        if (i == last):
            perimeter += 3
            break
        if p + 1 == island[i + 1] or p == island[i + 1]:
            if i == first or i == last:
                perimeter += 3
            else:
                perimeter += 2
            i += 1
        else:
            perimeter += 3
            break

    return perimeter


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))

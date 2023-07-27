#!/usr/bin/python3

def island_perimeter(grid):
    if grid is None or type(grid) is not list:
        return
    row_length = len(grid[0])
    for row in grid:
        if type(row) is not list:
            return
        if len(row) != row_length:
            return
        for elem in row:
            if type(elem) is not int:
                return
            if elem < 0 or elem > 1:
                return

    width = 0
    height = 0
    for row in grid:
        row_checker = 0
        for plot_num in range(0, len(row)):
            if row[plot_num] != row_checker:
                width += 1
                row_checker += 1
                row_checker %= 2

    for col_num in range(0, len(grid[0])):
        col_checker = 0
        for plot_num in range(0, len(grid)):
            if grid[plot_num][col_num] != col_checker:
                height += 1
                col_checker += 1
                col_checker %= 2


    return width + height

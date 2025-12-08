def equalPairs(grid) -> int:
    # [[3,2,1],
    #  [1,7,6],
    #  [2,7,7]]
    c = {}
    ans = 0
    for row in grid:
        c[str(row)] = c.get(str(row), 0) + 1

    for row in range(len(grid)):
        v = []
        for col in range(len(grid)):
            v.append(grid[col][row])

        ans += c.get(str(v), 0)

    return ans


print(equalPairs([[3,2,1],[1,7,6],[2,7,7]]))
print(equalPairs([[3,1,2,2],[1,4,4,5],[2,4,2,2],[2,4,2,2]]))
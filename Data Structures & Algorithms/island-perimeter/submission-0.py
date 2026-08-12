class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        row = len(grid)
        col = len(grid[0])

        visit = set()

        def dfs(i: int, j: int) -> int:
            if i >= row or j >= col or i < 0 or j < 0  or grid[i][j] == 0:
                return 1
            if(i, j) in visit:
                return 0
            
            visit.add((i,j))
            perim = dfs(i, j+1) + dfs(i+1, j) + dfs(i, j-1) + dfs(i-1, j)
            return perim

        for i in range(row):
            for j in range(col):
                if grid[i][j]:
                    return dfs(i, j)
        
        return 0 

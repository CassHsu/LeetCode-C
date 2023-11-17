int findChampion(int** grid, int gridSize, int* gridColSize) {
    for (int i = 0; i < gridSize; i++) {
        int sum = 0;
        for (int j = 0; j < *gridColSize; j++) {
            sum += grid[i][j];
        }

        if (sum == gridSize - 1) return i;
    }
    
    return 0;
}

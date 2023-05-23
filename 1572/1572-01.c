int diagonalSum(int** mat, int matSize, int* matColSize){
    int ans = 0;
    
    for (int l = 0, r = matSize - 1; l < matSize; l++, r--) {
        if (l == r) {
            ans += mat[l][r];
        } else {
            ans += mat[l][l];
            ans += mat[l][r];
        }
    }

    return ans;
}

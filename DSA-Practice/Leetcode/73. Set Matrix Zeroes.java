class Solution {
    public void setZeroes(int[][] matrix) {
        int height = matrix.length;
        int width = matrix[0].length;
        boolean[] rows = new boolean[height];
        boolean[] cols = new boolean[width];

        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                if(matrix[i][j] == 0){
                    rows[i] = cols[j] = true;
                }
            }
        }
        for (int i = 0; i < height; i++) {
            if(rows[i]) {
                for (int j = 0; j < width; j++) {
                    matrix[i][j] = 0;
                }
            }
        }
        for (int i = 0; i < width; i++) {
            if(cols[i]) {
                for (int j = 0; j < height; j++) {
                    matrix[j][i] = 0;
                }
            }
        }
    }
}
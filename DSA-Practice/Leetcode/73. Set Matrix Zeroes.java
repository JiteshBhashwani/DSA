import java.util.Arrays;

class Solution {
    public void setZeroes(int[][] matrix) {
        int row = matrix.length;
        int col = matrix[0].length;
        int[] dummyRow = new int[row];
        int[] dummyCol = new int[col];
        Arrays.fill(dummyRow, -1);
        Arrays.fill(dummyCol, -1);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    dummyRow[i] = 0;
                    dummyCol[j] = 0;
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(dummyRow[i] == 0 || dummyCol[j] == 0 ){
                    matrix[i][j]=0;
                }
            }
        }
    }
}
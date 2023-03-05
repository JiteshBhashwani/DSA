import java.util.ArrayList;
import java.util.List;

class Solution {
    public int totalNQueens(int n) {
        List<List<String>> x = solveNQueens(n);
        return x.size();
    }
    public static List<List<String>> solveNQueens(int n) {
        List<List<String>> answer = new ArrayList<>();
        placeQueens(answer,n, new ArrayList<>(),0);
        return answer;
    }
    private static void placeQueens(List<List<String>> answer,final int dimensions, ArrayList<String> output, int input) {
        if(input == dimensions){
            answer.add(new ArrayList<>(output)); return;
        }
        for (int i = 0; i < dimensions; i++) {
            if(checkChecks(output,i,input,dimensions)){
                output.add(".".repeat(i)+'q'+".".repeat(dimensions-i-1));
                placeQueens(answer,dimensions,output,input+1);
                output.remove(output.size()-1);
            }
        }
    }
    private static boolean checkChecks(ArrayList<String> output, int row,int column, int dimension) {
        int totalRN = output.size();
        for(String str: output)
            if(str.charAt(row) == 'q') return false; // column check
        for (int i = (row >= column)? 0: column - row,j = (row >= column)? row - column: 0 ;j < dimension && i < totalRN;j++,i++){ // diagonal check one
            if(output.get(i).charAt(j) == 'q') return false;
        }
        for(int i = (row + column < dimension)? 0: (row + column) - dimension + 1,j = (row + column < dimension)? row + column: dimension - 1;i < totalRN;i++,j--){ // diagonal check two
            if(output.get(i).charAt(j) == 'q') return false;
        }
        return true;
    }
}
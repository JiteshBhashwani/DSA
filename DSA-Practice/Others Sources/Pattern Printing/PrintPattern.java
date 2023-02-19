package myPackage.fundamentals;
import java.util.ArrayList;
import java.util.List;

public class PrintPattern {
    public static void pattern1(int n){
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= n; col++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void pattern2(int n){
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= row; col++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void pattern3(int n){
//      way 1
//        for (int row = 1; row <= n; row++) {
//            for (int col = n; col >= row; col--) {
//                System.out.print("*");
//            }
//            System.out.println();
//        }
//        way 2
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= n-row+1; col++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void pattern4(int n){
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= row; col++) {
                System.out.print(col);
            }
            System.out.println();
        }
    }
    public static void pattern5(int n){
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= row; col++) {
                System.out.print("*");
            }
            System.out.println();
        }
        for (int row = 1; row < n; row++) {
            for (int col = 1; col < n+1-row; col++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void pattern6(int n){
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= n - row; col++) {
                System.out.print(" ");
            }
            for (int col = 1; col <= row; col++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void pattern7(int n){
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col < row; col++) {
                System.out.print(" ");
            }
            for (int col = 1; col <= n - row + 1; col++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void pattern8(int n){
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= n - row; col++) {
                System.out.print(" ");
            }
            for (int col = 1; col <= 1 + (2 * (row - 1)); col++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void pattern9(int n){
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= row - 1; col++) {
                System.out.print(" ");
            }
            for (int col = 1; col <= 1 + (2 * ((n - row + 1) - 1)); col++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void pattern10(int n){
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= n - row; col++) {
                System.out.print(" ");
            }
            for (int col = 1; col <= row; col++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    public static void pattern11(int n){
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= row - 1; col++) {
                System.out.print(" ");
            }
            for (int col = 1; col <= n - row + 1; col++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    public static void pattern12(int n){

        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= row - 1; col++) {
                System.out.print(" ");
            }
            for (int col = 1; col <= n - row + 1; col++) {
                System.out.print("* ");
            }
            System.out.println();
        }
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= n - row; col++) {
                System.out.print(" ");
            }
            for (int col = 1; col <= row; col++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    public static void pattern13(int n){
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= n - row; col++) {
                System.out.print(" ");
            }
            for (int col = 1; col <= 1 + (2 * (row - 1)); col++) {
//                System.out.print(((col == (2 * (row - 1))) || col == 1 || row == n)? "* ": " ");
                if(row == n) System.out.print("*");
                else if((col == (2 * (row - 1))) || col == 1) System.out.print("* ");
                else System.out.print(" ");
            }
            System.out.println();
        }
    }
    public static void pattern14(int n){
        for (int i = 0;i < n; i++){
            for (int j = 0;j < i;j++){
                System.out.print(" ");
            }
            for (int j = 1; j < (n-i)*2 ; j++){
                if(i == 0) System.out.print("*");
                else if(j == 1 || j == ((n-i)*2) - 1) System.out.print("*");
                else  System.out.print(" ");
            }
            System.out.println();
        }
    }
    public static void pattern15(int n){
        int x = n + n - 1;
        for (int i = 1; i <= x; i++){
            int spaceCol = (i <= n)? n - i: i - n;
            for (int col = 1; col <= spaceCol; col++) {
                System.out.print(" ");
            }
            int colCount = (i <= n)? (2 * i - 1): (2 * ((n*2)-i) - 1);
            for (int j = 1; j <= colCount;j++){
                System.out.print(j == 1 || j == colCount? "*": " ");
            }
            System.out.println();
        }
    }
    public static void pattern16(int n){
        ArrayList<ArrayList<Integer>> al2 = new ArrayList<>(n);
        al2.add(new ArrayList<>(List.of(1)));
        al2.add(new ArrayList<>(List.of(1,1)));
        for (int row = 2; row < n;row++){
            al2.add(new ArrayList<>(List.of(1)));
            for (int col = 1; col < row;col++){
                int a = al2.get(row-1).get(col);
                int b = al2.get(row-1).get(col-1);
                al2.get(row).add(a+b);
            }
            al2.get(row).add(1);
        }
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n - row - 1; col++) {
                System.out.print(" ");
            }
            for (int col = 0; col <= row; col++) {
                System.out.print(al2.get(row).get(col) + " ");
            }
            System.out.println();
        }
    }
    public static void pattern17(int n){
        int x = n + n - 1;
        for (int row = 1; row <= x; row++) {
            int spaceCol = (row <= n)? n - row: row - n;
            for (int col = 1; col <= spaceCol; col++) {
                System.out.print(" ");
            }
            int maxCol = (row <= n)? (row * 2): (((x+1)-row) * 2);
            for (int col = 1; col <= maxCol - 1; col++) {
                int mid = maxCol / 2;
                System.out.print((col <= mid)?(mid - col + 1):(col - mid + 1));
            }
            System.out.println();
        }
    }
    public static void pattern18(int n){
        int dimension = n + n;
        for (int row = 0; row < dimension; row++) {
            for (int col = 0; col < dimension; col++) {
                int rangeStart = (row < n)? n - row : row - n + 1;
                int rangeEnd = (row < n)?(n + row): (dimension-row) + (n - 1);
                System.out.print(rangeStart <= col && col < rangeEnd?" ":"*");
            }
            System.out.println();
        }
    }
    public static void pattern19(int n){
        int dimension = n + n;
        for (int row = 1; row < dimension; row++) {
            for (int col = 1; col < dimension; col++) {
                int rangeStart = (row <= n)? row: dimension - row;
                int rangeEnd = (row <= n)?(dimension - row): row;
                System.out.print(rangeStart < col && col < rangeEnd?" ":"*");
            }
            System.out.println();
        }
    }
    public static void pattern20(int n){
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= n; col++) {
                System.out.print((1 < row && row < n) && (1 < col && col < n)?" ":"*");
            }
            System.out.println();
        }
    }
    public static void pattern21(int n){
        int i = 0;
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= row; col++) {
                System.out.printf("%-2d ",++i);
            }
            System.out.println();
        }
    }
    public static void pattern22(int n){
        //way one
//        for (int row = 1; row <= n; row++) {
//            boolean flag = row % 2 == 0;
//            for (int col = 1; col <= row; col++) {
//                System.out.printf(flag? "0 ": "1 ");
//                flag = !flag;
//            }
//            System.out.println();
//        }
        //way two
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= row; col++) {
                boolean flag = col % 2 == 0;
                System.out.printf(flag? "0 ": "1 ");
            }
            System.out.println();
        }
    }
    public static void pattern23(int n){
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= n - row; col++) {
                System.out.print("  ");
            }
            for (int col = 1; col <= n; col++) {
                System.out.print((col == 1 || col == n|| col == row)? "*  ":"   ");
            }
            for (int col = 2; col <= n; col++) {
                System.out.print((col == row)? "*  ":"   ");
            }
            System.out.println();

        }
    }
    public static void pattern24(int n){
        int dimension = n + n;
        for (int row = 1; row <= dimension; row++) {
            for (int col = 1; col <= dimension; col++) {
                boolean flag = row == col || col == (dimension + 1 - row) || col == 1 || col == dimension;
                System.out.print(flag?"*":" ");
            }
            System.out.println();
        }
    }
    public static void pattern25(int n){
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= n - row; col++) {
                System.out.print(" ");
            }
            for (int col = 1; col <= n; col++) {
                System.out.print((1 < row && row < n) && (1 < col && col < n)?" ":"*");
            }
            System.out.println();
        }
    }
    public static void pattern26(int n){
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= n - row + 1; col++) System.out.printf("%d",row);
            System.out.println();
        }
    }
    public static void pattern27(int n){
        int i = 0;
        int min = (n*(n+1)) + 1;
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col < row; col++) {
                System.out.print("   ");
            }
            for (int col = 1; col <= n + 1 - row; col++) {
                System.out.printf("%-2d ",++i);
            }
            min -= n - row + 1 ;
            for (int col = 0; col <= n - row; col++) {
                System.out.printf("%2d ",min + col);
            }
            System.out.println();
        }
    }
    public static void pattern28(int n){
        int height = n + n;
        for (int row = 1; row < height; row++) {
            int      width = (row <= n)? row: height - row;
            for (int col = 0; col < n - width; col++) {
                System.out.print(" ");
            }
            for (int col = 0; col < width; col++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    public static void pattern29(int n){
        int height = n + n;
        for (int row = 1; row < height; row++) {
            int rangeStart = (row < n)? row: height - row;
            int rangeEnd = (row <= n)? height - row: row;
            for (int col = 1; col < height; col++) {
                boolean flag = rangeStart < col && col < rangeEnd;
                System.out.print(flag?"  ":"* ");
            }
            System.out.println();
        }
    }
    public static void pattern30(int n){
        for (int row = 1; row <= n; row++) {
            for (int col = 0; col < n - row; col++) {
                System.out.print("  ");
            }
            int width = row + row - 1;
            for (int col = 1; col <= width; col++) {
                int symbol = (col <= row) ? row + 1 - col: col - row + 1;
                System.out.print(symbol + " ");
            }

            System.out.println();
        }
    }
    public static void pattern31(int n){
        n = n * 2;
        for (int i = 1; i < n; i++){
            for (int j = 1; j < n;j++){
                int x = (n/2) - Math.min(Math.min(i,j),Math.min(n-i,n-j)) + 1;
                System.out.print(x + " ");
            }
            System.out.println();
        }
    }
    public static void pattern32(int n){
        for (int row = 1; row <= n; row++) {
            char symbol = (char)('A' + (n - row) - 1);
            for (int col = 1; col <= row; col++) {
                System.out.print((char)(symbol + col));
            }
            System.out.println();
        }
    }
    public static void pattern33(int n){
        char symbol = 'a';
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= row; col++) {
                System.out.print(symbol++ + " ");
                symbol = (Character.isUpperCase(symbol))? Character.toLowerCase(symbol): Character.toUpperCase(symbol);
            }
            System.out.println();
        }
    }
    public static void pattern34(int n){
        for (int row = 1; row <= n; row++) {
            char symbol = (char)('A' + (n - row));
            for (int col = 0; col <= n - row; col++) {
                System.out.print((char)(symbol - col));
            }
            System.out.println();
        }
    }
    public static void pattern35(int n){
        for (int row = 1; row <= n; row++) {
            int width = n * 2;
            int rangeStart = row;
            int rangeEnd = width + 1 - row;
            for (int col = 1; col <= width; col++) {
                int symbol = (col <= n) ? col: width + 1 - col;
                System.out.print((rangeStart<col) && (col<rangeEnd) ? " ": symbol);
            }
            System.out.println();
        }
    }
}
package myPackage.fundamentals;

import java.util.ArrayList;
import java.util.List;

public class PrintPattern {
    public static void butterfly(int x){
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < x; j++) {
                System.out.print(i>=j? "*": " ");
            }
            for (int j = x-1; j >= 0; j--){
                System.out.print(i>=j? "*": " ");
            }
            System.out.println();
        }
        for (int i = 0; i < x; i++) {
            for (int j = x-1; j >= 0; j--){
                System.out.print(i<=j? "*": " ");
            }
            for (int j = 0; j < x; j++) {
                System.out.print(i<=j? "*": " ");
            }
            System.out.println();
        }
    }
    public static void butterfly1(int x){
        for (int i = 0; i < x; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print(" * ");
            }
            for (int j = 0; j < (x-1-i)*2; j++) {
                System.out.print("   ");
            }
            for (int j = 0; j <= i; j++) {
                System.out.print(" * ");
            }
            System.out.println();
        }
        for (int i = x-1; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                System.out.print(" * ");
            }
            for (int j = 0; j < (x-1-i)*2; j++) {
                System.out.print("   ");
            }
            for (int j = 0; j <= i; j++) {
                System.out.print(" * ");
            }
            System.out.println();
        }
    }
    public static void rhombus(int x){
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < x-i-1; j++) {
                System.out.print(" ");
            }
            for (int j = 0; j < x; j++) {
                System.out.print("x");
            }
            System.out.println();
        }
    }

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
//                System.out.print(col + "|" + (maxCol - col) + " || ");
                int printThis = Math.min(col,maxCol-col);
                System.out.print(printThis);
//                System.out.print(maxCol);
            }
            System.out.println();
        }
    }


    //////////////////////////////////////////////////////////

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

    ///////////////////////////

}
import java.util.*;

public class array_3_d {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int[][][] arr = new int[3][2][3];

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                for (int k = 0; k < arr[i][j].length; k++) {
                    System.out.println("Enter marks of school " + i + " class " + j + " students " + k);
                    arr[i][j][k] = sc.nextInt();
                }
            }
        }

        System.out.println();
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                for (int k = 0; k < arr[i][j].length; k++) {
                    System.out.print(arr[i][j][k] + " ");
                }
                System.out.println();
            }
        }
        sc.close();
    }
}

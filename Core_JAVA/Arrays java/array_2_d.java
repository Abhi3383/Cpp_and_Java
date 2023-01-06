import java.util.*;

public class array_2_d {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int[][] arr = new int[3][4];
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.println("Enter marks if class " + (i) + " Student " + (j));
                arr[i][j] = sc.nextInt();
            }
        }
        sc.close();
        System.out.println("Marks of students are : ");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}

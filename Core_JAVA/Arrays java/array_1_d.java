import java.util.*;

public class array_1_d {

    public static void main(String args[]) {
        int[] a = new int[5];

        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < 5; i++) {
            System.out.println("Please enter the marks of Student " + (i + 1));
            a[i] = sc.nextInt();
        }
        sc.close();
        System.out.println();
        System.out.println("Marks of students are as follows : ");
        for (int i = 0; i < 5; i++) {
            System.out.println(a[i]);
        }
    }
}

//to remember how we have done create x in a checkbox copy and mark i & j in rows and columns
//will i==j will create one strip and (i+j) == n-1 will create another strip

public class X_letter {
    public static void main(String args[]) {
        int n = 10;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j || (i + j) == n - 1 || i == 0 || j == 0 || j == n - 1 || i == n - 1) {
                    System.out.print("* ");
                } else
                    System.out.print("  ");
            }
            System.out.println();
        }
    }
}

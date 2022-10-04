/*

* * * * * * * * * * * * * * 
* *       *   *         * *
*   *   *       *     *   *
*     *           * *     *
*   *   *         * *     *
* *       *     *     *   *
*           * *         * *
* *         * *           *
*   *     *     *       * *
*     * *         *   *   *
*     * *           *     *
*   *     *       *   *   *
* *         *   *       * *
* * * * * * * * * * * * * *

D1 i==j
D2 i+j==n-1
P1 (i + j) == (n - 1) / 2
P2 (i - j) == (n - 1) / 2 
P3 (j - i) == (n - 1) / 2 
P4 (i + j) == n + (n - 1) / 2
*/

public class creative_patter_1 {
    public static void main(String args[]) {
        int n = 14;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j || (i + j) == n - 1 || i == 0 || j == 0 || i == n - 1 || j == n - 1 || (i + j) == (n - 1) / 2
                        || (i - j) == (n - 1) / 2 || (j - i) == (n - 1) / 2 || (i + j) == n + (n - 1) / 2)
                    System.out.print("* ");
                else
                    System.out.print("  ");
            }
            System.out.println();
        }
    }
}

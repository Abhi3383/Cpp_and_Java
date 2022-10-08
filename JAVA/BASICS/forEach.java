public class forEach {
    public static void main(String args[]) {

        int arr[] = { 10, 20, 30, 40 };

        for (int element : arr) {
            System.out.println(element);
        }

        int arr1[][] = { { 10, 20, 30 }, { 10, 20, 30 } };
        for (int ar[] : arr1) {
            for (int element : ar) {
                System.out.print(element + " ");
            }
            System.out.println();
        }

    }
}

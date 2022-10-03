class basics {
    public static void main(String args[]) {
        int i = 1;
        // while
        while (i <= 5) {
            System.out.println("*");
            i++;
        }
        System.out.println(" ");

        // do-while
        do {
            System.out.println("*");
            i++; // at least once it will be executed
        } while (i < 0);
        System.out.println(" ");

        // for loop
        for (int j = 0; j < i; j++) {
            System.out.print("*");
        }
    }
}

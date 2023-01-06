public class data_types {
    public static void main(String args[]) {
        byte a = 10;
        double b;
        b = a; // implicit type casting
        System.out.println(a);
        System.out.println(b);

        System.out.println(" ");

        double q = 10.0;
        byte p;
        p = (byte) q;// explicit type casting
        System.out.println(p);
        System.out.println(q);

        System.out.println(" ");

        int m = 25;
        int n = 2;
        float c = m / n;
        System.out.println(c);
    }
}

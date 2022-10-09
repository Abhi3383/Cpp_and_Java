public class ways_to_compareString {
    public static void main(String args[]) {

        // 1. == -> Refrences will be compared
        String s1 = "Alien";
        String s2 = "Alien";
        String s3 = new String("Alien");

        System.out.println(s1 == s2);
        // Reason in copy
        System.out.println(s1 == s3);
        System.out.println();
        // 2. equalsto() -> values of string will be compared

        String s4 = "Alien";
        String s5 = "Alien";
        String s6 = new String("Aliens");
        String s7 = new String("Aliens");

        System.out.println(s4 == s5);
        System.out.println(s4.equals(s5));
        System.out.println(s6 == s7);
        System.out.println(s6.equals(s7));

        System.out.println();

        String s8 = "Alien";
        String s9 = "alien";
        String s10 = new String("Alien");
        System.out.println(s8 == s9);
        System.out.println(s8 == s10);
        System.out.println(s8.equals(s9));

        // 3. eualsIgnoreCase() -> string will be compred by ignoring case sensitivity
        System.out.println(s8.equalsIgnoreCase(s9));

        System.out.println();

        // 4. compareTo() - compare character by character
        System.out.println(s4.compareTo(s5));
        System.out.println(s8.compareTo(s9));
        System.out.println(s9.compareTo(s8));
        System.out.println(s8.compareTo(s10));
        System.out.println(s5.compareTo(s7));
        System.out.println(s7.compareTo(s5));

    }
}

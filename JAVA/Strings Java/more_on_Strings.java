import java.util.*;

public class more_on_Strings {
    public static void main(String args[]) {
        String s1 = "iNeuron";
        String s2 = "";

        // iNeuron --> norueNi
        for (int i = s1.length() - 1; i >= 0; i--) {
            s2 = s2 + s1.charAt(i);
        }
        System.out.println(s2);

        System.out.println();

        // Think twice --> Twice think
        String s3 = "Think Twice";
        String s4 = "";
        String a[] = s3.split(" ");
        for (int i = a.length - 1; i >= 0; i--) {
            s4 = s4 + a[i] + " ";
        }
        System.out.println(s4);

        System.out.println();

        Scanner sc = new Scanner(System.in);
        String s5 = sc.nextLine();
        String s6 = "";
        for (int i = s5.length() - 1; i >= 0; i--) {
            s6 = s6 + s5.charAt(i);
        }
        if (s5.equals(s6)) {
            System.out.println("isPalindrome");
        } else
            System.out.println("notPalindrome");
        sc.close();
    }
}

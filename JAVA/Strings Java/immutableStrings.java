public class immutableStrings {
    public static void main(String args[]) {
        String s1 = "Aliens";// 2 objects (SCP and other one in heap area)
        System.out.println(s1);// 1 object(SCP)
        s1 = s1.concat(" are here");
        System.out.println(s1);
        // Since String is immutable, if we try to change the object,
        // that change would not happen in the same memory,
        // this mechanism is called immutable.

        System.out.println();

        String s3 = "Telusko";
        String s4 = "iNeuron";
        String s6 = s3 + s4;
        System.out.println("s6 : " + s6);
        String s7 = s3 + " iNeuron's";
        System.out.println("s7 : " + s7);
        String s8 = s3.concat(" iNeuron");
        System.out.println(s3);
        String s5 = "Telusko" + " iNeuron";
        System.out.println("s5 : " + s5);
        System.out.println(s8);

        System.out.println();

        // More on concatenation
        String s9 = "hi" + " telusko";
        System.out.println(s9);
        String s10 = "Abhishek " + 99;
        System.out.println(s10);
        String s11 = "College " + 99 + " " + 99 + " " + 10;
        System.out.println(s11);
        String s12 = 10 + " " + 4 + " " + "iNeuron";
        System.out.println(s12);
        String s13 = 10 + 4 + 6 + " Telusko";
        System.out.println(s13);
    }
}

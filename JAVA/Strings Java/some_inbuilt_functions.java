public class some_inbuilt_functions {
    public static void main(String args[]) {
        String s1 = "Hi ! Abhishek here.";

        // 1.charAt()
        System.out.println(s1.charAt(0));
        System.out.println(s1.charAt(2));
        System.out.println(s1.charAt(5));
        System.out.println(s1.charAt(9));

        System.out.println();

        // 2. subString()
        System.out.println(s1.substring(4, 8)); // { [ _ , _ ) }
        System.out.println(s1.substring(2, 9));

        System.out.println();

        // 3. endsWtih()
        System.out.println(s1.endsWith("."));
        System.out.println(s1.endsWith("a"));

        System.out.println();

        // 4. length()
        System.out.println(s1.length());

        System.out.println();

        // final int a = 10; -> errror , final means value for that variable cant be
        // changed.
        int a = 10;
        int b = 20;
        final int c = 10;
        b++;
        a++;
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);

        // Final vs Immutablity

        final StringBuffer sb = new StringBuffer("sachin");
        sb.append("IND");
        System.out.println(sb); // sachinIND
        // sb = new StringBuffer("tendulkar");// CE
        // System.out.println(sb);
        /*
         * * if the variable is of primitive type(int,float,double) and if it is final
         * then the value of the variable should not be changed,
         * if we try to change it would result in "CompileTimeError".
         * if the variable is of refrence type and if it of mutable nature the object
         * can be changed, it would not result in "CompileTimeError.",
         * but if we try to assign the refrence variable with a new object address then
         * it would result in "CompileTimeError."
         * 
         * Note:
         * final variable(valid concept)
         * final object(not valid)
         * immutable variable(not valid)
         * immutable object(valid)
         */
    }
}
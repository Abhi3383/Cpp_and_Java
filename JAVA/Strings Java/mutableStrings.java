
public class mutableStrings {
    public static void main(String args[]) {

        StringBuffer s1 = new StringBuffer("hello");// 2 objects (SCP and other one in heap area)
        s1.append(" brother");// 1 object(SCP)
        System.out.println(s1);
        // Since StringBuffer is mutable, if we try to change the object,
        // that change would happen in the same memory,
        // this mechanism is called mutable.

        System.out.println();

        String s2 = new String("hello");// 2 objects (SCP and other one in heap area)
        String s3 = new String(" brother");// 1 object(heapArea)
        System.out.println(s2.equals(s3));

        System.out.println();

        StringBuffer s4 = new StringBuffer("sachin");
        StringBuffer s5 = new StringBuffer("sachin");
        System.out.println(s4.equals(s5));// equals method is not avaliable in StringBuffer class,
        // it is a part of object class though we are allowed to write it like that,
        // so the the implementation is coming from object class which compares the
        // refrence(address) not the data.
        System.out.println(s4 == s5);

        System.out.println();

        String s6 = new String("sachin");
        String s7 = new String("sachin");
        System.out.println(s6.equals(s7));// equals method is implemented to check the content of the string
        System.out.println(s6 == s7);

        System.out.println();

        final StringBuffer s8 = new StringBuffer("hello");// 2 objects (SCP and other one in heap area)
        s8.append(" brother");// 1 object(SCP)
        System.out.println(s8);

    }
}

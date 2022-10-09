/*
 * Difference b/w StringBuilder and StringBuffer
 String Buffer => 1.0 V (l990)
                =>All the methods present are synchronized
                =>At a time on StringBuffer object only one thread can operate
                =>Since only one thread operate it is "ThreadSafety”.
                =>Performance is low.
StringBuilder=>1.5V
             =>All the methods present are not synchronized
             =>At a time on StringBuilder object many threads can operate
             =>So it is not "ThreadSafety”.
             =>Performance is high.
 */

public class methods_of_StringBuffer {
    public static void main(String args[]) {
        StringBuilder s = new StringBuilder();

        // 1. capacity() -> how much it can store, default=16, when filled
        // (currCapacity + 1)*2
        System.out.println(s.capacity());
        s.append("abcdefghijklmnopqr");
        System.out.println(s.capacity());
        s.append("abcdefghi");
        System.out.println(s.capacity());
        System.out.println(s);

        System.out.println();

        // 2. length()
        System.out.println(s.capacity());// here the capacity will be
        // (length of string + 16)
        System.out.println(s.length());

        System.out.println();

        // 3.insert()
        /*
         * insert(int, String)
         * insert (int, int)
         * insert (int, long)
         * it inserts the String at the specified index
         */
        StringBuffer q = new StringBuffer("abcdef");
        q.insert(2, "xyz");
        System.out.println(q);

        System.out.println();

        // 4. delete()
        /*
         * delete(int, int)
         * deleteCharat(int)
         */
        q.delete(2, 5);
        System.out.println(q);
        q.deleteCharAt(4);
        System.out.println(q);

        System.out.println();

        // 5. reverse()-> it is possible to reduce the length of the String at the
        // runtime.
        q.reverse();
        System.out.println(q);

        System.out.println();

        // 6. setLength()
        StringBuffer r = new StringBuffer("Abhishek");
        r.setLength(5);
        System.out.println(r);

        System.out.println();

        // 7. trimToSize() -> It will change the capacity to the length of the String
        r.trimToSize();
        System.out.println(r.capacity());

        System.out.println();

        // 8. ensureCapacity() -. it is used to increase the capacity to the specific
        // limit

        StringBuffer x = new StringBuffer();
        System.out.println(x.capacity());

        x.ensureCapacity(1000);

        System.out.println(x.capacity());

    }
}

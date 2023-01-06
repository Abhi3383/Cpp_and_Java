//final -> you dont want anyone to inherit your method.
//        -> its final and finished
class demo1 // if we write final class demo1 then class demo2 extends demo1 will generate
            // error
{
    final int a = 5;// we can apply final to a variable also
                    // and you cannot change this later

    final public void disp() {
        System.out.println("Parent");
    }
}

class demo2 extends demo1 {
    // ovverriding is not possible
    // so writing public void disp() will generate error
}

public class finalKeyword {
    public static void main(String agrs[]) {
        demo2 d = new demo2();
        d.disp();
    }
}

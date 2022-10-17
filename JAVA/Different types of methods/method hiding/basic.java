//overriding is not allowed in static methods

class Telusko {
    public static void disp() {
        System.out.println("Telusko is parent");
    }
}

class Alien extends Telusko {
    // static method gets inherited
    // so public static void disp(){} gets inherited in backend
    public static void disp() {
        System.out.println("Telusko is a Alien ");
    }
}

public class basic {
    public static void main(String args[]) {
        Alien.disp();
        Telusko.disp();
    }
}

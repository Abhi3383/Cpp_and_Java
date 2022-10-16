class Telusko {
    String name;
    int age;

    Telusko() {
        System.out.println("Parent class");
    }
}

class Alien extends Telusko {
    Alien() {
        System.out.println("Child class");
    }
}

public class inherit {
    public static void main(String agrs[]) {

        Alien a = new Alien();
    }
}
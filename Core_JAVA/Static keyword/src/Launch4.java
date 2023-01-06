//WAP to count number of objects created.

class Alien {
    int age;
    String name;

    static int count;
    {
        count++;
    }

    Alien() {
    }

    Alien(int age) {
        this.age = age;
    }

    Alien(int age, String name) {
        this.age = age;
        this.name = name;
    }

}

public class Launch4 {
    public static void main(String args[]) {

        Alien a1 = new Alien();
        Alien a2 = new Alien(28);
        Alien a3 = new Alien(28, "Rahul");

        System.out.println(Alien.count);
    }

}

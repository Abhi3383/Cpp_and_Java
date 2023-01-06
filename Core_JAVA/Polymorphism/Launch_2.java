//Poymorphism -> 1 : M (many forms)

class Animal {
    public void eat() {
        System.out.println("Animal is eating.");
    }

    public void sleep() {
        System.out.println("Animal is sleeping.");
    }
}

class Tiger extends Animal {
    public void eat() {
        System.out.println("Tiger kills then eat");
    }

}

class Monkey extends Animal {
    public void eat() {
        System.out.println(" Monkey steals eat");
    }

}

class Deer extends Animal {
    public void eat() {
        System.out.println("Deer grazes eat");
    }

}

class Forest {
    public void permit(Animal a)// Polymorphism
    {
        a.eat();
        a.sleep();
    }
}

public class Launch_2 {
    public static void main(String args[]) {

        Tiger cp = new Tiger();
        Deer fp = new Deer();
        Monkey pp = new Monkey();

        Forest f = new Forest(); // polymorphism taking place
        f.permit(cp);
        f.permit(fp);
        f.permit(pp);
    }
}

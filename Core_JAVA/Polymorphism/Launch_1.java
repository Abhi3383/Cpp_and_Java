//Poymorphism -> 1 : M (many forms)

class plane {
    public void fly() {
        System.out.println("Plane is flying");
    }

    public void takeOff() {
        System.out.println("Plane is taking off");
    }
}

class cargoPlane extends plane {
    public void fly() {
        System.out.println("Cargo plane flies at lower height");
    }

    public void takeOff() {
        System.out.println("Cargo plane requires runway to take off");
    }
}

class passengerPlane extends plane {
    public void fly() {
        System.out.println("passsenger plane flies at medium height");
    }

    public void takeOff() {
        System.out.println("passenger plane requires medium runway to take off");
    }

}

class fighterPlane extends plane {
    public void fly() {
        System.out.println("fighter plane flies at height");
    }

    public void takeOff() {
        System.out.println("Fighter plane requires short runway to take off");
    }

}

class Airport {
    public void permit(plane p)// Polymorphism
    {
        p.takeOff();
        p.fly();
    }
}

public class Launch_1 {
    public static void main(String args[]) {

        cargoPlane cp = new cargoPlane();
        fighterPlane fp = new fighterPlane();
        passengerPlane pp = new passengerPlane();

        Airport a = new Airport(); // polymorphism taking place
        a.permit(cp);
        a.permit(fp);
        a.permit(pp);

        plane p;

        System.out.println();
        p = cp; // Polymorphism taking place
        p.takeOff();
        p.fly();
        System.out.println();
        p = fp;
        p.takeOff();
        p.fly();
        System.out.println();
        p = pp;
        p.takeOff();
        p.fly();
    }
}

//methods which are same in parent class and child class like function public void fly(){} are called over-ridden methods.
//methods which are not present in parent class but are present only in child class like function public void carryPassenger() {}, public void carryGoods() {} are called specialized method.
//methods which are present in parent class and you are not writing it in child class but it is present in child class in backend are called inherited methods.

class Plane {
    public void fly() {
        System.out.println("Plane is flying");
    }

    public void takeOff() {
        System.out.println("Plane is taking off");
    }
}

class cargoPlane extends Plane {
    public void fly() {
        System.out.println("Cargo plane flies at lower height");
    }

    public void carryGoods() {
        System.out.println("Cargo plane carry goods");
    }
}

class passengerPlane extends Plane {
    public void fly() {
        System.out.println("passenger plane flies at medium height");
    }

    public void carryPassenger() {
        System.out.println("Passenger plane carry Passenger");
    }

}

public class launchInherit {
    public static void main(String args[]) {
        cargoPlane cp = new cargoPlane();
        cp.fly();
        cp.takeOff();
        cp.carryGoods();
        System.out.println();

        Plane dp = new cargoPlane();
        dp.fly();
        dp.takeOff();
        ((cargoPlane) dp).carryGoods(); // Downcasting -> changing the behaviour of the parent to act like a child
        System.out.println();

        passengerPlane pp = new passengerPlane();
        pp.fly();
        pp.takeOff();// for takeOff we are overriding it
        System.out.println();
    }
}

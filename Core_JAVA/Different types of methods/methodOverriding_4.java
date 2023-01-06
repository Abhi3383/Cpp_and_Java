// A Simple Java program to demonstrate 
// method overriding in java 

// Base Class 
class Parentss {
    void show() {
        System.out.println("Parentss's show()");
    }
}

// Inherited class
class Childss extends Parentss {
    // This method overrides show() of Parentss
    @Override
    void show() {
        System.out.println("Childss's show()");
    }
}

// Driver class
class methodOverriding_4 {
    public static void main(String[] args) {
        // If a Parentss type reference refers
        // to a Parentss object, then Parentss's
        // show is called
        Parentss obj1 = new Parentss();
        obj1.show();

        // If a Parentss type reference refers
        // to a Childss object Childss's show()
        // is called. This is called RUN TIME
        // POLYMORPHISM.
        Parentss obj2 = new Childss();
        obj2.show();
    }
}

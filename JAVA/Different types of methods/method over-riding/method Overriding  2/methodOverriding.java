// A Java program to demonstrate 
// multi-level overriding 

// Base Class 
class Parent {
    void show() {
        System.out.println("Parent's show()");
    }
}

// Inherited class
class Child extends Parent {
    // This method overrides show() of Parent
    void show() {
        System.out.println("Child's show()");
    }
}

// Inherited class
class GrandChild extends Child {
    // This method overrides show() of Parent
    void show() {
        System.out.println("GrandChild's show()");
    }
}

// Driver class
class methodOverriding {
    public static void main(String[] args) {
        Parent obj1 = new GrandChild();
        obj1.show();
    }
}

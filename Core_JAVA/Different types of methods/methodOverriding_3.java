// Java program to show that 
// if the static method is redefined by 
// a derived class, then it is not 
// overriding, it is hiding 

class Parents {
    // Static method in base class
    // which will be hidden in subclass
    static void m1() {
        System.out.println("From Parents "
                + "static m1()");
    }

    // Non-static method which will
    // be overridden in derived class
    void m2() {
        System.out.println("From Parents "
                + "non-static(instance) m2()");
    }
}

class Childs extends Parents {
    // This method hides m1() in Parents
    static void m1() {
        System.out.println("From Childs static m1()");
    }

    // This method overrides m2() in Parents
    @Override
    public void m2() {
        System.out.println("From Childs "
                + "non-static(instance) m2()");
    }
}

// Driver class
class methodOverriding_3 {
    public static void main(String[] args) {
        Parents obj1 = new Childs();

        // As per overriding rules this
        // should call to class Childs static
        // overridden method. Since static
        // method can not be overridden, it
        // calls Parents's m1()
        Parents.m1();

        // Here overriding works
        // and Childs's m2() is called
        obj1.m2();
    }
}

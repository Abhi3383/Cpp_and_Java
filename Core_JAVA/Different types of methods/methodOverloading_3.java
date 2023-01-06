// Java Program to Illustrate Method Overloading
// By Changing Data Types of the Parameters

// Class 1
// Helper class 
class Additionss {

    // Adding three integer values
    public int add(int a, int b, int c) {

        int sum = a + b + c;
        return sum;
    }

    // adding three double values.
    public double add(double a, double b, double c) {

        double sum = a + b + c;
        return sum;
    }
}

class methodOverloading_3 {
    public static void main(String[] args) {

        Additionss ob = new Additionss();

        int sum2 = ob.add(1, 2, 3);
        System.out.println(
                "sum of the three integer value :" + sum2);
        double sum3 = ob.add(1.0, 2.0, 3.0);
        System.out.println("sum of the three double value :"
                + sum3);
    }
}

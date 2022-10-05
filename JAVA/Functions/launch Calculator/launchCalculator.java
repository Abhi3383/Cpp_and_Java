class calculator {
    int a, b;

    public void add() {
        a = 10;
        b = 20;
        int c = a + b;
        System.out.println("x+y = " + c);
    }

    public void subtract(int x, int y) {
        int z = x - y;
        System.out.println("x-y = " + z);
    }

    public int multiply(int p, int q) {
        int r = p * q;
        return r;
    }

    public int divison() {
        int a = 4, b = 2, c;
        c = a / b;
        return c;
    }
}

public class launchCalculator {
    public static void main(String args[]) {
        calculator calc = new calculator();
        calc.add();
        calc.subtract(20, 10);
        int result = calc.multiply(2, 4);
        System.out.println("p*q = " + result);
        int results = calc.divison();
        System.out.println("p/q = " + results);
    }
}

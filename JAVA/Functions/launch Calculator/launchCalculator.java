class calculator {
    int a, b;

    public void add() {
        a = 10;
        b = 20;
        int c = a + b;
        System.out.println(c);
    }
}

public class launchCalculator {
    public static void main(String args[]) {
        calculator cal = new calculator();
        cal.add();
    }
}

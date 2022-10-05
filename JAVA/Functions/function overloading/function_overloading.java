class calculator {
    public int add(int num1, int num2) {
        int result = num1 + num2;
        return result;
    }

    public int add(int num1, int num2, int num3) {
        int result = num1 + num2 + num3;
        return result;
    }
}

public class function_overloading {
    public static void main(String args[]) {
        int num1 = 5;
        int num2 = 6;
        int num3 = 7;

        calculator calc = new calculator();

        int result = calc.add(num1, num2);
        System.out.println("result : " + result);

        int results = calc.add(num1, num2, num3);
        System.out.println("result : " + results);
    }
}

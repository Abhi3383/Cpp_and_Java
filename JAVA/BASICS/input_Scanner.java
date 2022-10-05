import java.util.*;

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

public class input_Scanner {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int num3 = sc.nextInt();

        calculator calc = new calculator();

        int result = calc.add(num1, num2);
        System.out.println("result : " + result);

        int results = calc.add(num1, num2, num3);
        System.out.println("result : " + results);
    }

}

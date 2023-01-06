import java.util.Scanner;

class Alpha1 {
	@SuppressWarnings("resource")
	public void divison() {
			System.out.println("Welcome to divison performing application");
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter the first number to divide");
			int a = sc.nextInt();
			System.out.println("Enter the second number");
			int b = sc.nextInt();
			int res = a / b;
			System.out.println("The result is " + res);
			
			System.out.println("Thank you for using our application");
	}
}

class Beta1 {
	public void disp() {
		Alpha1 a = new Alpha1();
		a.divison();
	}
}

public class Launch6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try {
		Beta1 b = new Beta1();
		b.disp();
		}
		catch (ArithmeticException e) {
			System.out.println("Handling in main method");
			System.out.println("Enter the non-zero second number");
		}
	}

}

import java.util.Scanner;

class Alpha2 {
	@SuppressWarnings("resource")
	public void divison() throws ArithmeticException {
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

class Beta2 {
	public void disp() {
		Alpha2 a = new Alpha2();
		a.divison();
	}
}

public class Launch7 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try {
		Beta2 b = new Beta2();
		b.disp();
		}
		catch (ArithmeticException e) {
			System.out.println("Handling in main method");
			System.out.println("Enter the non-zero second number");
		}
	}

}

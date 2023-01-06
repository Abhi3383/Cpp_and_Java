import java.util.Scanner;

class Alpha {
	@SuppressWarnings("resource")
	public void divison() {
		try {
			System.out.println("Welcome to divison performing application");
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter the first number to divide");
			int a = sc.nextInt();
			System.out.println("Enter the second number");
			int b = sc.nextInt();
			int res = a / b;
			System.out.println("The result is " + res);
			
		} catch (ArithmeticException e) {
			System.out.println("Enter the non-zero second number");
		}
		System.out.println("Thank you for using our application");
	}
}

class Beta {
	public void disp() {
		Alpha a = new Alpha();
		a.divison();
	}
}

public class Launch5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Beta b = new Beta();
		b.disp();

	}

}

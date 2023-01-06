import java.util.Scanner;

class Alpha5 {
	// 2nd part
	// Now we have the exception in method but the caller object dosen't know that
	// the exception will come to me
	// because it will check signature of method and there's no error method and
	// inside method we have and handled the exception and have
	// re thrown it also
	// now to resolve this problem we have duck the main method also
	@SuppressWarnings("resource")
	public void divison() throws ArithmeticException { // 1st part
		// if u handle the exception wherever it has occurred that will not be
		// propagated to caller
		// but the requirement after handling you may have to propagate in such cases
		// you have
		// to use "throw" keyword
		// the way we we have have done in lines 27-29

		try {
			System.out.println("Welcome to divison performing application");
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter the first number to divide");
			int a = sc.nextInt();
			System.out.println("Enter the second number");
			int b = sc.nextInt();
			int res = a / b;
			System.out.println("The result is " + res);

			System.out.println("Thank you for using our application");
		} catch (ArithmeticException HelloSir) { // anything we can write instead of HelloSir
			System.out.println("Exception handled in divison method only");
			throw HelloSir;
		}
		// below line will not be executed as the exception is re thrown to main method
		// but if we want to get it executed in any condition then we put it under
		// finally {}
		finally {
			System.out.println("Thank u for using my application");
		}
		System.out.println("This line will not be executed if there's exception");
	}
}

public class Launch9 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Main method connection established");
		// 3rd part
		// Now we have told the caller object that a exception may come to you as we
		// have the exception in method
		// so it will handle the exception
		try {
			Alpha5 a = new Alpha5();
			a.divison();
		} catch (Exception e) {
			System.out.println("Exception handled in main");
		}
	}

}

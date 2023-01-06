import java.util.*;
public class Launch1 {

	@SuppressWarnings("resource")
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		System.out.println("Welcome to divison performing application");
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the first number to divide");
		int a=sc.nextInt();
		System.out.println("Enter the second number");
		int b=sc.nextInt();
		
		int res = a/b;
		System.out.println("The result is "+res);
		System.out.println("Thank you for using application");
		
		//In this if give input any positive number and 0 then it will give
		//Exception in thread "main" java.lang.ArithmeticException: / by zero
		//at Launch1.main(Launch1.java:14)
        //this is an abrupt termination
	}

}

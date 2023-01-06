import java.util.Scanner;

public class Launch4 {

	@SuppressWarnings("resource")
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Welcome to divison performing application");
		Scanner sc = new Scanner(System.in);
		try {
		System.out.println("Enter the first number to divide");
		int a = sc.nextInt();
		System.out.println("Enter the second number");
		int b = sc.nextInt();
		int res = a / b;
		System.out.println("The result is " + res);
		}
		catch(ArithmeticException e) {
			System.out.println("oye bhai ? Please enter non zero second number");
		}
		
		try {
		System.out.println("Please enter the size of an array.");
		int size = sc.nextInt();
		int arr[] = new int[size];
		System.out.println("Enter the element to be added in arr.");
		int ele = sc.nextInt();
		System.out.println("Enter the position at which the element has to be inserted.");
		int pos = sc.nextInt();
		arr[pos] = ele;
		}
		catch(NegativeArraySizeException e) {
			System.out.println("oye bhai ? Please be positive");
		}
		catch(ArrayIndexOutOfBoundsException e) {
			System.out.println("oye bhai ? Be in your limits");
		}
		catch(Exception e) {
			System.out.println("Please give proper input");
		}
		System.out.println("Thank you for using our application");
	}

}

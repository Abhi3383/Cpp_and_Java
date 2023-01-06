import java.util.Scanner;
public class Launch2 {

	@SuppressWarnings("resource")
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		try {
		System.out.println("Welcome to divison performing application");
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the first number to divide");
		int a=sc.nextInt();
		System.out.println("Enter the second number");
		int b=sc.nextInt();
		
		int res = a/b;
		System.out.println("The result is "+res);

		
		}
		catch(Exception e) {
			System.out.println("Thank you for using application");
		}
		System.out.println("Connection is terminated");

	}

}

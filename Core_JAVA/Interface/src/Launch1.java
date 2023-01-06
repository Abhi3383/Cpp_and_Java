
// Interface is a collection of public abstract methods
// we cannot change the access specifier it is public by default and it will remain public

import java.util.Scanner;
interface Calculator {
	void add(); // behind the scene it will be interpreted as
				// -> public abstract void add();
	// if we want we can also type but why should we type? we will not

	void sub(); // behind the scene it will be interpreted as
				// -> public abstract void sub();
}

//implementation will be provided by class
//in simple terms implements means that were promising calculator we will implementation for all its methods

// implement keyword works somewhat like abstract keyword only

class myCalculator1 implements Calculator {
	Scanner sc = new Scanner(System.in);
	public void add() {
		System.out.println("Please enter the 1st number to add");
		int a=sc.nextInt();
		System.out.println("Please enter the 2nd number to add");
		int b=sc.nextInt();
		int c=a+b;
		System.out.println(c);
	}

	public void sub() {
		System.out.println("Please enter the 1st number to subtract");
		int a=sc.nextInt();
		System.out.println("Please enter the 2nd number to subtract");
		int b=sc.nextInt();
		int c=a-b;
		System.out.println(c);
	}
}

class myCalculator2 implements Calculator{
	public void add() {
		int a=10;
		int b=20;
		int c=a+b;
		System.out.println(c);
	}

	public void sub() {
		int a=10;
		int b=20;
		int c=a-b;
		System.out.println(c);
	}
}

class Cal{
	public void permit(Calculator ref) {
		ref.add();
		ref.sub();
	}
}

public class Launch1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		myCalculator1 m1= new myCalculator1();
		myCalculator2 m2= new myCalculator2();
		Cal c = new Cal();
		c.permit(m1);
		c.permit(m2);
	}

}

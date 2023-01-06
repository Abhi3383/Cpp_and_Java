import java.util.Scanner;

class Farmer {
	private float pa;
	private float td;
	private float si;
	private static float ri; //class variables or static variables

	static //efficient way of writing
	{
		ri=2.5f;
	}
	
	Scanner sc = new Scanner(System.in);
	public void acceptInput() {
		System.out.println("Dear,Kindly enter loan amount needed");
		pa = sc.nextFloat();
		System.out.println("Dear, kindly enter the time needed to repay");
		td = sc.nextFloat();
	}
	
	public void compute() {
		si=(pa*td*ri)/100;
	}
	public void disp() {
		System.out.println("Si is "+si);
	}
}

public class LaunchFarmer {
	public static void main(String args[]) {
		Farmer f1 = new Farmer();
		Farmer f2 = new Farmer();
		
		f1.acceptInput();
		f1.compute();
		f1.disp();
	
		f2.acceptInput();
		f2.compute();
		f2.disp();
	}

}

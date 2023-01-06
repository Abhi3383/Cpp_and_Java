//we can use lambda method with interface which has only one method


interface Computers{
	void show(); //method
}

class Laptop implements Computers{
	public void show() {
		System.out.println("in show");
	}
}


public class LambdaDemo1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Computers com=()->System.out.println("in show 1");
		com.show();
		
		/*
		 * Computers com = new Computers() {
			public void show() {
				System.out.println("in show");
			}
		};
		In this " new Computers() {
			public void show()
			{}
			};"
			this is something we can assume so we just remove it
			and put "()->" in place of it
			"()" it is defining a method here
		 */
	}

}

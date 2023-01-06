// If a parent class is not throwing any exception then for the child class it is not compulsory to throw.
// But then if it needed it can throw only unchecked exception not checked exception
class Beta7 {
	void disp() {
		System.out.println("Parent class overridden method");
	}
}

class Beta8 extends Beta7 {
	void disp() throws ArithmeticException{
		System.out.println("overriding in child");
	}
}

public class Launch14 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Beta8 b = new Beta8();
		b.disp();
	}

}

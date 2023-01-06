// If a parent class is throwing unchecked exception then for the child class it is not compulsory to throw.
// But then if it needed it can throw only unchecked exception not checked exception
class Beta9 {
	void disp() throws ArithmeticException{
		System.out.println("Parent class overridden method");
	}
}

class Beta10 extends Beta9 {
	void disp() {
		System.out.println("overriding in child");
	}
}

public class Launch15 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Beta10 b = new Beta10();
		b.disp();
	}

}

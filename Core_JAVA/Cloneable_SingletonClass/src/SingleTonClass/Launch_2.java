package SingleTonClass;

/*
 * Creation of our own singleton classes:
We can create our own singleton classes for this we have to use private
constructor, static variable and factory method.
 */

// to make demo class singleton
class Demo {

	// 1. first make constructor private
	// to avoid object creation manually by the user using new keyword
	private Demo() {

	}

	// 2. second make a static method
	// then inside static method object creation we should do
	public static Demo getDemo() {
		// only one object should be created so we will create a check
		if (d == null) {
			d = new Demo();
		}
		return d;
	}

	// how to create it?
	// 3. make a static variable and set it to null
	private static Demo d = null;

}

public class Launch_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		// static factory methods
		Demo d1 = Demo.getDemo();
		Demo d2 = Demo.getDemo();

		System.out.println(d1 == d2);
		System.out.println(d1.hashCode() == d2.hashCode());
		System.out.println(d1.hashCode());
		System.out.println(d2.hashCode());
	}

}

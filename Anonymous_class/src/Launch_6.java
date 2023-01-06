
public class Launch_6 {

	static class nested {
		public void m1() {
			System.out.println("Instance method inside static nested class.");
		}

		public static void m2() {
			System.out.println("static method inside static nested class");
		}

		public static void main(String[] args) {
			// TODO Auto-generated method stub
			System.out.println("main method.");
		}
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("main method of static nested class.");

		Launch_6.nested n = new Launch_6.nested();
		// object of static method can't be created
		n.m1();
		Launch_6.nested.m2();
		n.main(args);

		System.out.println();
		nested q = new nested();
		q.m1();
		q.main(args);
		q.m2();
	}

}

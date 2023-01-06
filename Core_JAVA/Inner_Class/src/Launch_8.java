
public class Launch_8 {

	int x = 10;// instance variable
	static int j = 20;// static variable

	//static methods only static variable are permitted
	//if we write
	// public static void m1() {
	//      then we can only access
	//      j which is a static variable
	//}
	public void m1() {
		int y = 30;// local variable
		class Inner {
			
			//Inside inner class static methods are not permitted
			//will not work
			// public static void m2() { 
			//    body 
			//}
			public void m2() {
				System.out.println(x); // 10
				System.out.println(j); // 20
				System.out.println(y); // 30
			}
		}
		new Inner().m2();
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		new Launch_8().m1();
	}

}

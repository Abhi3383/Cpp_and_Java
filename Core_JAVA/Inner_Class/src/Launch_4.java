
public class Launch_4 {

	class Inner {
		public void m4() {
			System.out.println("Inside inner class m1().");
		}
	}
}

class Test {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		new Launch_4().new Inner().m4();
	}
}

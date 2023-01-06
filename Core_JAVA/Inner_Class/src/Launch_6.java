class A{
	class B{
		class C{
			public void m1() {
				System.out.println("m1() of inner class.");
			}
		}
	}
}
public class Launch_6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new A().new B().new C().m1();
	}

}

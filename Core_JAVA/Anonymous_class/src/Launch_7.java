
public class Launch_7 {

	int x=10;
	static int y=20;
	static class Nested{
		public void m1() {
			// System.out.println(x);
			System.out.println(y);
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Nested n = new Nested();
		n.m1();
	}

}

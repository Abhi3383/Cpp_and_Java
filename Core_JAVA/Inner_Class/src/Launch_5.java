
public class Launch_5 {

	int x = 10; // instance variable of outer class
	static int a = 20; // static variable

	int p = 1;
	int q = 11;

	class Inner {
		int y = 100; // instance variable of inner class
		int p = 2;
		int q = 22;

		public void m1() {
			int z = 1000; // local variable of inner class method m1()
			int p = 3;
			int q = 33;
			System.out.println(x); // 10
			System.out.println(y); // 100
			System.out.println(z); // 1000
			System.out.println(a); // 20
			System.out.println(p); // 3
			System.out.println(q); // 33
			
			//within the inner class "this" always refers to the current inner class object.
			//To refer current outer class object we have to use "outer_class_name.this.variable_name".
			System.out.println(this.q);// 22
			System.out.println(Launch_5.this.q);// 11
		}

	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new Launch_5().new Inner().m1();
	}

}

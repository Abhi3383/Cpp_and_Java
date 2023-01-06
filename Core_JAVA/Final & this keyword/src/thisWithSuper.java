class dot1 {

	int a, b, c;

	public dot1() {
		a = 40;
		b = 20;
		c = a + b;
	}

	public dot1(int x, int y) {
		c = x + y;
	}
}

class dot extends dot1 {

	int m, n, o;

	public dot() {
		super(40,50);
		m = 30;
		n = 20;
		o = m + n;
	}

	public dot(int x, int y) {
		this();
		o = x + y;
	}

	public void disp() {
		System.out.println(c);
		System.out.println(o);
	}
}

public class thisWithSuper {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		dot d1 = new dot(10, 20);
		d1.disp();

	}

}

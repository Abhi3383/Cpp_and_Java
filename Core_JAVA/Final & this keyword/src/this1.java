/* 
 * At least one constructor must have super() method    
 * this() dosen't work in b/w 2 classes it works only in classes.
   this() same class constructor 
*/

class dem1 {

	int m, n, o, p, q;

	public dem1() {
		this(10, 20);
		m = 70;
		n = 20;
		o = m + n;
	}

	public dem1(int x, int y) {
		this(30, 40, 50);
		q = x + y;
	}

	public dem1(int x, int y, int z) {
		p = x+y+z;

	}

	public void disp() {
		System.out.println(o);
		System.out.println(p);
		System.out.println(q);
	}
}

public class this1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		dem1 d = new dem1();
		d.disp();
//		dem2 d1 = new dem2(10,20);
//		d1.disp();

	}

}

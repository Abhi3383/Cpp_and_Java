/*
 * we can implement multiple interfaces but we cannot implement multiple extends(inheritance)
               because implement contains public abstract methods 
 */
interface Calc1 {
	void add(int a, int b);
}

interface Calc2 {
	int sub(int a, int b);
}

class myCalc implements Calc1, Calc2 {
	public void add(int a, int b) {
		int c = a + b;
		System.out.println(c);
	}

	public int sub(int a, int b) {
		int c = a - b;
		return c;
	}
}

public class Launch2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		myCalc c = new myCalc();
		c.add(10, 20);
		System.out.println(c.sub(30, 20));
	}

}

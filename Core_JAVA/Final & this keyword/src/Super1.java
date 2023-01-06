/*
 * Concepts used - Constructor overloading
 *               - Inheritance
 * At least one method must have super() method         
*/

class demo1 {
	
	int a, b, c;

	public demo1() {
	a=40;
	b=20;
	c=a+b;
	}
	public demo1(int x, int y) {
//		a=x;
//		b=y;
//		c=a+b;
//      or we can write
		c=x+y;
	}
}
class demo2 extends demo1{
	
	int m,n,o;
	
	public demo2() {
		super();//write or don't write it will be there since super(); is there
		        //it will move the command to parent class demo1()
		//flow of code demo2() object -> super() in demo2() -> class demo1() -> public demo1()
		m=10;
		n=20;
		o=m+n;
	}
	public demo2(int x,int y) {
		super(); //here it will call again call zero parameter constructor -> class demo1() -> public demo1()
		o=x+y;
	}
	public void disp() {
		System.out.println(c);
		System.out.println(o);
	}
}

public class Super1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		demo2 d = new demo2();//-> Even though we created child class first
		                      //but it is the parent class which is getting executed first
		d.disp();
		demo2 d1 = new demo2(10,20);
		d1.disp();

	}

}

 // As a child class if we want to invoke parent class parameterized constructor 
 // then we have to call the super() method by yourself and pass the arguments
class demos1 {
	
	int a, b, c;

	public demos1() {
	a=40;
	b=20;
	c=a+b;
	}
	public demos1(int x, int y) {
		c=x+y;
	}
}
class demos2 extends demos1{
	
	int m,n,o;
	
	public demos2() {
		super(30,40);//we have to write it if we want to pass the arguments
		             //it will move the command to parent class demo1()
		m=10;
		n=20;
		o=m+n;
	}
	public demos2(int x,int y) {
		super(80,80);
		o=x+y;
	}
	public void disp() {
		System.out.println("c : "+c);
		System.out.println("o : "+o);
	}
}

public class Super2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		demos2 d = new demos2();//-> Even though we created child class first
		                      //but it is the parent class which is getting executed first
		d.disp();
		demos2 d1 = new demos2(10,20);
		d1.disp();

	}

}

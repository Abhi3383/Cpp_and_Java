class Demo{
	public static void disp1() {
		System.out.println("Static method");
	}
	public void disp2() {
		System.out.println("Non Static method");
	}
}

public class Launch3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Demo.disp1();//can be accessed static method directly with class name
		Demo d=new Demo();
		d.disp1();
		d.disp2();
	}

}

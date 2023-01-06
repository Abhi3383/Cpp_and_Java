/*
 *- at one place both extend and implement is allowed 
 */
interface Calc{
	void add();
	
}
class myCal{
	void sub() {
		int a=20;
		int b=30;
		int c=a-b;
		System.out.println(c);
	}
}

class myC extends myCal implements Calc{
	public void add() {
		
	}
}

public class Launch3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}

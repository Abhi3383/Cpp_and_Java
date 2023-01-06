// in interface we cannot create objects 
// in interface we can have private methods but scope will be limited to the interface only in which it is created
// behavior of interface can be invoked by static method without creation of object because static are not objects dependent
   
interface Telusko{
	void disp();
	static void show() {
		System.out.println("I am static method of interface");
	}
	default void shock() {
		shocks();
	}
	private void shocks() {
		System.out.println("i'm private");
	}
}

public class Launch6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Telusko.show();
	}
}

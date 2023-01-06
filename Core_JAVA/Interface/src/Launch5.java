// interface can have method with body but not without default 

interface emo1{
	void disp();
	default void show() //necessary to write default otherwise it would generate error 
	{
		System.out.println("Hello I'm in interface.");
	}
}

class Alien implements emo1{
	public void disp() {
		System.out.println("Implementing display");
	}
	public void show() //over-riding
	{
		System.out.println("I have be overrided inchild");
	}
}
public class Launch5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		emo1 d = new Alien();
		d.disp();
		d.show();
	}
}

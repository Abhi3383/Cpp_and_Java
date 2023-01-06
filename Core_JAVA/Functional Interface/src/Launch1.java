@FunctionalInterface
interface Demo{
	void disp();
}

class Alpha implements Demo{
	public void disp() {
		System.out.println("I have given body");
	}
}


public class Launch1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Demo d = new Alpha();
		d.disp();
	}
}

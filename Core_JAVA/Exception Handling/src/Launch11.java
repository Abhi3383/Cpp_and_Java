
class Demo {
	int disp() {
		try {
			System.out.println("Disp");
			return 10;
		}
		// System.out.println("Disp last line"); error -> Unreachable code
		// after return we cannot write it
		// but if want to print it then we have to enclose above code in try and then
		// use finally
		finally {
			System.out.println("Disp last line");
		}
	}
}

public class Launch11 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Demo d = new Demo();
		System.out.println(d.disp());
	}

}

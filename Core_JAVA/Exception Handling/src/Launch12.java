// System.exit(0); will dominate the finally block

class Betas {
	void disp() {
		try {
			System.out.println("Disp method");
			System.exit(0);
		} finally {
			System.out.println("Finally");
		}
	}
}

public class Launch12 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Betas b = new Betas();
		b.disp();
	}

}

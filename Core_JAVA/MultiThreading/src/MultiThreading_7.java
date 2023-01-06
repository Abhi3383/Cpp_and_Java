class Alpha extends Thread {
	public void run() {
		String t = Thread.currentThread().getName();
		if (t.equals("BANK")) {
			banking();
		} else if (t.equals("PRINT")) {
			printing();
		} else {
			cal();
		}
	}

	public void banking() {
		System.out.println("Banking task started.");
		for (int i = 0; i < 3; i++) {
			try {
				Thread.sleep(2000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			System.out.println("Banking.......");
		}
		System.out.println("Banking completed");
		System.out.println("---------------------------------");
	}

	public void printing() {
		System.out.println("Printing Activity.");
		for (int i = 0; i < 3; i++) {
			try {
				Thread.sleep(2000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			System.out.println("Printing .......");
		}
		System.out.println("Printing  completed......");
		System.out.println("---------------------------------");
	}

	public void cal() {
		System.out.println("Calculation task started.");
		for (int i = 0; i < 3; i++) {
			try {
				Thread.sleep(2000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			System.out.println("Calculating.......");
		}
		System.out.println("Calculation completed......");

	}
}

public class MultiThreading_7 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Alpha a1 = new Alpha();
		Alpha a2 = new Alpha();
		Alpha a3 = new Alpha();

		a1.setName("BANK");
		a2.setName("PRINT");
		a3.setName("CALC");

		a1.start();
		a2.start();
		a3.start();
	}

}

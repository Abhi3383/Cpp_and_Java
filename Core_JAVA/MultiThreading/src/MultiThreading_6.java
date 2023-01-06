
class Demo7 implements Runnable {
	public void run() {
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
}

class Demo8 implements Runnable {
	public void run() {
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
}

class Demo9 implements Runnable {
	public void run() {
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

public class MultiThreading_6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Demo7 d1 = new Demo7();
		Demo8 d2 = new Demo8();
		Demo9 d3 = new Demo9();

		Thread t1 = new Thread(d1);
		Thread t2 = new Thread(d2);
		Thread t3 = new Thread(d3);

		t1.start();
		t2.start();
		t3.start();

	}

}

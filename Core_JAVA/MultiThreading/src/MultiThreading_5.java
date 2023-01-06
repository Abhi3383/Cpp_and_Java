
class Demo4 extends Thread {
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

class Demo5 extends Thread{
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

class Demo6 extends Thread {
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

public class MultiThreading_5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Demo4 d1 = new Demo4();
		Demo5 d2 = new Demo5();
		Demo6 d3 = new Demo6();
		
		d1.start();;
		d2.start();
		d3.start();
	}

}


class Demos7 implements Runnable {
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

class Demos8 implements Runnable {
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

class Demos9 implements Runnable {
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

public class MultiThreading_8 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		System.out.println("Main thread got the chance first");
		Thread t = Thread.currentThread();
		System.out.println(t.isAlive());
		
		Demos7 d1 = new Demos7();
		Demos8 d2 = new Demos8();
		Demos9 d3 = new Demos9();

		Thread t1 = new Thread(d1);
		Thread t2 = new Thread(d2);
		Thread t3 = new Thread(d3);
		
		System.out.println(t1.isAlive());
		System.out.println(t2.isAlive());
		System.out.println(t3.isAlive());
		
		t1.start();
		System.out.println(t1.isAlive());
		
		t2.start();
		System.out.println(t2.isAlive());
		
		t3.start();
		System.out.println(t3.isAlive());

		t1.join();
		t2.join();
		t3.join();
		
		System.out.println("Main thread is completeing first also");
	}

}

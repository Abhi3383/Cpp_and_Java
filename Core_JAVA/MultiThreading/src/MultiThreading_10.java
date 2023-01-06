/*
 * Synchronized static method -> class level block
 * Synchronized non-static method -> object level block
 */

class iNeuron implements Runnable {
	public void run() {
		try {
			for (int i = 0; i < 5; i++) {
				System.out.println(i);
			}
			Thread.sleep(3000);
			synchronized (this) {

				for (int i = 0; i < 5; i++) {
					System.out.println((char) (i + 65));
				}
			}
		} catch (Exception e) {
			System.out.println("Some interruption");
		}
	}
}

public class MultiThreading_10 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		iNeuron in = new iNeuron();
		Thread t1 = new Thread(in);
		Thread t2 = new Thread(in);
		Thread t3 = new Thread(in);

		t1.start();
		t3.start();
		t2.start();
	}
}
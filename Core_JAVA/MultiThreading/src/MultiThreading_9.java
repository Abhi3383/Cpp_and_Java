/*
 * Synchronization - Lock-> at a time only one thread can run
 				   - Synchronized Keyword can be applied on block or method 
 */

class Bathroom implements Runnable {
	synchronized public void run() {
		try {
			System.out.println(Thread.currentThread().getName() + " has entered the bathroom");
			Thread.sleep(5000);
			System.out.println(Thread.currentThread().getName() + " is using the bathroom");
			Thread.sleep(5000);
			System.out.println(Thread.currentThread().getName() + " exited the bathroom");
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}

public class MultiThreading_9 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		Bathroom b = new Bathroom();
		
		Thread t1 = new Thread(b);
		Thread t2 = new Thread(b);
		Thread t3 = new Thread(b);
		
		t1.setName("BOY"); //name of threads
		t2.setName("GIRL");
		t3.setName("TIKTOKER");
		
		t1.start();
		t1.join();
		t2.start();
		t2.join();
		t3.start();
		t3.join();
	}

}

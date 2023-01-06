//producer thread operation
class Producers extends Thread {

	// Producer producing the data in StringBuffer
	StringBuffer sb;

	// variable used by thread for communication
	boolean dataProvider = false;

	// constructor injection
	public Producers() {
		// StringBuffer object is created with a default capacity 16
		sb = new StringBuffer();
	}

	@Override
	public void run() {
		// TODO Auto-generated method stub
		synchronized (sb) {
			for (int i = 1; i <= 10; i++) {

				try {
					sb.append(i + ": ");
					Thread.sleep(1000);
					System.out.println("appending");
				} catch (InterruptedException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
			// send the notification to the waiting thread
			sb.notify();
		}
	}

}

//consumer thread operations
class Consumers extends Thread {

	// Creating producer object to get the produced data from Stringbuffer
	Producers producer;

	public Consumers(Producers producer) {
		this.producer = producer;
	}

	@Override
	public void run() {
		synchronized (producer.sb) {
			try {
				//wait till the notification is sent by the producer
				producer.sb.wait();
				// Consume the data produced by the producer
				System.out.println(producer.sb);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
		}
	}
}

//efficient method of inter thread communication using wait() and notify()
public class MultiThreading_17 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Producers obj1 = new Producers();
		Consumers obj2 = new Consumers(obj1);

		Thread t1 = new Thread(obj1);// producer thread
		Thread t2 = new Thread(obj2);// consumer thread

		t2.start(); // consumer should wait
		t1.start(); // producer should start
	}

}


class Demo extends Thread {
	
	//data is updated
	int total = 0;

	public void run() {
		
		//producer thread
		// sum of first 100 natural numbers
		synchronized (this) {
			System.out.println("Child thread starts the calculation"); //step -2
			for (int i = 1; i <= 100; i++) {
				total = total + i;
			}	
			System.out.println("Child thread is giving the notification call");//step -3
			this.notify();
		}
		
	}
}

public class MultiThreading_16 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Demo d = new Demo();
		d.start();
		//consumer thread(Producer-consumer)
		synchronized (d) {
			System.out.println("The main thread is calling ....."); //step -1
			try {
				d.wait();
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			System.out.println("Main thread got the notification call");//step -4
			System.out.println(d.total);//5050
		}

	}

}

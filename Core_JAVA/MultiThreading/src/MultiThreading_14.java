class iNeurons implements Runnable {
	public void run() {
		try {
			for (int i = 0; i < 4; i++) {
				System.out.println("Java is best to understand programming.");
				Thread.sleep(3000);
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}

public class MultiThreading_14 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Thread t = Thread.currentThread();
		System.out.println(t.isDaemon());

		iNeurons i = new iNeurons();
		Thread t1 = new Thread(i);
		System.out.println(t1.isDaemon());

		t1.start();
		
		t1.setDaemon(true);
		System.out.println(t1.isDaemon());

	}

}


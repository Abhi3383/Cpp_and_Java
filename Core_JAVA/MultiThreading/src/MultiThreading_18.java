
//Extending the thread class to create a userDefined Thread
class test extends Thread{
	@Override
	public void run() {
		for (int i = 0; i <= 10; i++) {
			try {
				System.out.println("Child Thread");
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
}

public class MultiThreading_18 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//Lambda expression coding
		new Thread(()-> {
			
				// TODO Auto-generated method stub
				for (int i = 0; i <= 10; i++) {
					try {
						System.out.println("Child Thread");
						Thread.sleep(1000);
					} catch (InterruptedException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
				}
		}).start();
		for (int i = 0; i <= 5; i++) {
			try {
				System.out.println("Main Thread");
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}

}

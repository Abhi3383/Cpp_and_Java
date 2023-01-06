import java.util.Iterator;

public class Launch_3 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		// here we are not creating for Runnable interface are creating implements
		// class object.
		// we have created a implementation class for runnable
//		Runnable r = new Runnable() {
//
//			@Override
//			public void run() {
//				// logic for the thread
//
//				for (int i = 1; i <= 5; i++) {
//					System.out.println("Child thread");
//				}
//			}
//		};
//		Thread t=new Thread (r);
//      we can just write

		Thread t = new Thread(new Runnable() {

			@Override
			public void run() {
				// logic for the thread

				for (int i = 1; i <= 5; i++) {
					System.out.println("Child thread");
				}
			}
		});
		t.start();
		for (int i = 1; i <= 5; i++) {
			System.out.println("Parent/Main thread");
		}
	}
}

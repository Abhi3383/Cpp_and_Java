
public class Launch_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

//		Thread t = new Thread(new Runnable() {
//
//			@Override
//			public void run() {
//				// logic for the thread
//
//				for (int i = 1; i <= 5; i++) {
//					System.out.println("Child thread");
//				}
//			}
//		});
//		t.start();
		
//      instead of writing that we can just write
		
		
		new Thread(new Runnable() {

			@Override
			public void run() {
				// logic for the thread

				for (int i = 1; i <= 5; i++) {
					System.out.println("Child thread");
				}
			}
		}).start();
		
		for (int i = 1; i <= 5; i++) {
			System.out.println("Parent/Main thread");
		}
	}
}

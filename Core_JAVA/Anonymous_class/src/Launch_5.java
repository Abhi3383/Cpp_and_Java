
public class Launch_5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		new Thread(new Runnable() {
//
//			@Override
//			public void run() {
//				// logic for the thread
//
//				for (int i = 1; i <= 5; i++) {
//					System.out.println("Child thread");
//				}
//			}
//		}).start();
		
//     to make it more optimized we can use lambda expression
		new Thread(
			()-> {
				for (int i = 1; i <= 5; i++) 
				{
					System.out.println("Child thread");
				}
			}
	).start();
		
		for (int i = 1; i <= 5; i++) {
			System.out.println("Parent/Main thread");
		}
	}
}


public class MultiThreading_3 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		System.out.println("Banking task started.");
		for (int i = 0; i < 3; i++) {
			Thread.sleep(2000);
			System.out.println("Banking.......");
		}
		System.out.println("Banking completed");
		System.out.println("---------------------------------");
		System.out.println("Printing Activity.");
		for (int i = 0; i < 3; i++) {
			Thread.sleep(2000);
			System.out.println("Printing .......");
		}
		System.out.println("Printing  completed......");
		System.out.println("---------------------------------");
		System.out.println("Calculation task started.");
		for (int i = 0; i < 3; i++) {
			Thread.sleep(2000);
			System.out.println("Calculating.......");
		}
		System.out.println("Calculation completed......");
	}

}

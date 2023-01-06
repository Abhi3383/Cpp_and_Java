
class Demo1 {
	public void banking() {
		System.out.println("Banking task started.");
		for (int i = 0; i < 3; i++) {
			try {
				Thread.sleep(2000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			System.out.println("Banking.......");
		}
		System.out.println("Banking completed");
		System.out.println("---------------------------------");
	}
}

class Demo2 {
	public void printing() {
		System.out.println("Printing Activity.");
		for (int i = 0; i < 3; i++) {
			try {
				Thread.sleep(2000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			System.out.println("Printing .......");
		}
		System.out.println("Printing  completed......");
		System.out.println("---------------------------------");
	}
}

class Demo3 {
	public void Calculation() {
		System.out.println("Calculation task started.");
		for (int i = 0; i < 3; i++) {
			try {
				Thread.sleep(2000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			System.out.println("Calculating.......");
		}
		System.out.println("Calculation completed......");

	}
}

public class MultiThreading_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Demo1 d1 = new Demo1();
		Demo2 d2 = new Demo2();
		Demo3 d3 = new Demo3();
		
		d1.banking();
		d2.printing();
		d3.Calculation();
	}

}


public class MultiThreading_2 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		System.out.println("Hello focus here");
		Thread t = Thread.currentThread();
		System.out.println(t);
		
		String name = Thread.currentThread().getName();
		System.out.println(name);
		
		t.setName("Let's code");
		t.setPriority(4);
		
		System.out.println(t);
	}

}

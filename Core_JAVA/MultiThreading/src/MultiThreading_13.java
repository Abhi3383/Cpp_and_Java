//Daemon thread -> It is someone which is someone not so important
public class MultiThreading_13 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Thread t = Thread.currentThread();
		System.out.println(t.isDaemon());

		Thread t1 = new Thread();
		System.out.println(t1.isDaemon());

		t1.setDaemon(true);
		System.out.println(t1.isDaemon());

		t.setDaemon(true);
		System.out.println(t.isDaemon());// error -> cannot make main thread daemon
	}
}

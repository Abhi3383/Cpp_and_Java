import java.util.*;

public class zTest2 {

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		HashMap hm = new HashMap();
		Temp t = new Temp();
		hm.put(t, "Shri");// since now this also an object toString() object will be called
		System.out.println(hm);// hm.toString() will be called here

		t = null;// making eligible for garbage collection
		System.gc();// Triggering garbage collector thread to clean 't'
		Thread.sleep(5000);

		System.out.println(hm);
	}
}

class Temp {
	@Override
	public String toString() {
		return "HELLO";
	}

	
	//Garbage collector wont clean temp object bcz HashMap would always
	//dominate the Garbage Collector
	@Override
	public void finalize() {
		System.out.println("cleaning temp obejct");
	}
}

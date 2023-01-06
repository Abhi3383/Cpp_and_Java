import java.util.*;

public class WeakHashMaps {

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		WeakHashMap hm = new WeakHashMap();
		Temps t = new Temps();
		hm.put(t, "Shri");// since now this also an object toString() object will be called
		System.out.println(hm);// hm.toString() will be called here

		t = null;// making eligible for garbage collection
		System.gc();// Triggering garbage collector thread to clean 't'
		Thread.sleep(5000);

		System.out.println(hm);
	}
}

class Temps {
	@Override
	public String toString() {
		return "temp";
	}

	
	//Garbage collector will clean temps object bcz WeakHashMap would not 
	//dominate the Garbage Collector
	@Override
	public void finalize() {
		System.out.println("cleaning temp obejct");
	}
}

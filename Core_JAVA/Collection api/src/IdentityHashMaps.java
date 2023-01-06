
import java.util.*;

public class IdentityHashMaps {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//JVM calls == operator to identify whether the keys are duplicated or not
		// i1==i2 (false) bcz both have different address
		
		IdentityHashMap h = new IdentityHashMap();

		// Creating a key
		Integer i1 = new Integer(10);
		Integer i2 = new Integer(10);

		// Adding the data to the HashMap
		h.put(i1, "Sachin");
		h.put(i2, "Messi");

		System.out.println(h);
	}

}

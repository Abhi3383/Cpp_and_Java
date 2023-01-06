import java.util.*;

public class hashMaps {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		HashMap hm = new HashMap();
		hm.put(10, "Sachin");
		hm.put(7, "dhoni");
		hm.put(18, "kohli");
		hm.put(45, "rohit");
		System.out.println(hm);// hm.toString() will be called
		System.out.println(hm.getClass().getName());

		Set s = hm.keySet();// to get the key from EntrySet
		// method gets executed and the object is created at the runtime
		System.out.println(s);
		System.out.println(s.getClass().getName());

		Collection c = hm.values(); // To get the values from the map
		System.out.println(c);
		System.out.println(c.getClass().getName());

		Set mapData = hm.entrySet();// To get the k, V from Map as set
		System.out.println(mapData);
		System.out.println(mapData.getClass().getName());

		System.out.println();
		Iterator itr = mapData.iterator();
		while (itr.hasNext()) {
			Map.Entry data = (Map.Entry) itr.next(); // return type is object, object of Map.entry()
			System.out.println(data.getKey() + ": " + data.getValue());
			if (data.getKey().equals(10)) {
				data.setValue("SRT");
			}

		}

		System.out.println();
		System.out.println(hm);
		
		//-------------------------------------------------------------------------------------------------------
		
		HashMap hms = new HashMap();
		hms.put(null, 0); //null->0
		hms.put(null,null);//null->null
		hms.put(null, "ABC");//null->ABC (reWriting Null)
		System.out.println(hms);
		System.out.println();
		
		//-------------------------------------------------------------------------------------------------------
		
		HashMap h=new HashMap();
		
		//JVM calls equals(obj2) operator to identify whether the keys are duplicated or not
		
		//Creating a key
		Integer i1= new Integer(10);
		Integer i2= new Integer(10);
		
		
		//Adding the data to the HashMap
		h.put(i1,"Sachin");
		h.put(i2, "Messi");
		
		System.out.println(h);
	}
}

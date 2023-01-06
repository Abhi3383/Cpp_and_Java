import java.util.*;
import java.util.concurrent.CopyOnWriteArrayList;

public class ArrayLists {
	public static void main(String[] args) {
		// heterogeneous
		ArrayList al1 = new ArrayList();
		al1.add("iNeuron");
		al1.add('B');
		al1.add(4);
		al1.add(24.5);

		System.out.println(al1); // internally al.toString() is called

		System.out.println("********************************");

		// homogeneous
		ArrayList al2 = new ArrayList();
		al2.add(10);
		al2.add(20);
		al2.add(30);
		System.out.println(al2);

		al2.addAll(al1);
		System.out.println(al2);

		System.out.println(al2.contains(20));

		System.out.println(al2.get(3));

		boolean a = al2.isEmpty();
		System.out.println(a);

		int s = al2.size();
		System.out.println(s);

		System.out.println(al2.getClass());

		System.out.println("********************************");

		ArrayList al3 = new ArrayList();
		al3.add("Bengaluru");
		al3.add("India");
		al3.add(15);
		al3.add(30.5);
		System.out.println(al3);

		al3.clear();
		System.out.println(al3);
		System.out.println(al3.isEmpty());

		al3.ensureCapacity(5);
		al3.add("Bengaluru");
		al3.add("India");
		al3.add(15);
		al3.add(30.5);

		al3.add(1, 50);
		System.out.println(al3);

		System.out.println("********************************");

		ArrayList al4 = new ArrayList();
		al4.add(100);
		al4.add(200);
		System.out.println(al4);
		al4.addAll(1, al3);
		System.out.println(al4);

		System.out.println("********************************");

		ArrayList al5 = new ArrayList();
		al5.add(10);
		al5.add(20);
		al5.add(30);
		al5.add(40);
		al5.add(50);

		Iterator itr = al5.iterator();
		while (itr.hasNext()) {
			System.out.println(itr.next());
		}
		/*
		 * error - fail fast while(itr.hasNext()) { System.out.println(itr.next());
		 * al5.add(99); }
		 * 
		 * to achieve failSafe using iterator we use another method
		 * CopyOnWriteArrayList()
		 */

		System.out.println("********************************");

		CopyOnWriteArrayList cal = new CopyOnWriteArrayList();
		cal.add(100);
		cal.add(200);
		cal.add(300);

		// fail safe
		Iterator itr1 = cal.iterator();
		while (itr1.hasNext()) {
			System.out.println(itr1.next());
			cal.add(420);
		}
		
		System.out.println("********************************");

		ArrayList al6 = new ArrayList();
		for (int i = 1; i <= 10; i++) {
			al6.add(i);
		}

		System.out.println(al6); // internally al.toString() is called

		Iterator itr2 = al6.iterator();
		System.out.println("Reading elements one by one from collection.");
		while (itr2.hasNext()) {
			Integer data = (Integer) itr2.next();
			System.out.println(data);

			if(data%2==0) {
				System.out.println(data+": is an even number.");
			}
			else {
				itr2.remove();
			}
		}
		
		System.out.println(al6);

		System.out.println("********************************");
	
		CopyOnWriteArrayList al = new CopyOnWriteArrayList();
		
		al.add("A");
		al.add("B");
		al.add("C");
		
		Iterator itr3=al.iterator();//fail fast iterator
		
		while(itr3.hasNext()) {
			String data = (String) itr3.next();
			System.out.println(data);
			
			//Assume one more thread is doing up modification on ArrayList
			al.add("D");//Trying to change the structure of an ArrayList
		}
		
		System.out.println(al);
	}
}

import java.util.*;

public class Iterators {
	public static void main(String[] args) {

		List l = new ArrayList();
		l.add(10);
		l.add(20);
		l.add(30);
		l.add(40);
		l.add(50);

		System.out.println(l);

		for (int i = 0; i <= l.size() - 1; i++) {
			System.out.println(l.get(i));
		}
		System.out.println("*************************");

		// enhanced for loop - for each loop
		for (Object o : l) {
			System.out.println(o);
		}

		LinkedList ll1 = new LinkedList();
		ll1.add(100);
		ll1.add(200);
		ll1.add("iNeuron");
		ll1.add("Bengaluru");
		
		System.out.println("*************************");
		
		Iterator itr1=ll1.iterator();
		
		while(itr1.hasNext()) {
			System.out.println(itr1.next());
		}
		/*
		 * while(itr1.hasNext()) {
			LinkedList o =(LinkedList) itr1.next();
		}
		 */
		
		LinkedList ll2 = new LinkedList();
		ll2.add(100);
		ll2.add(200);
		ll2.add("iNeuron");
		ll2.add("Bengaluru");
		
		System.out.println("*************************");
		
		ListIterator litr=ll2.listIterator(ll2.size());
		
		while(litr.hasPrevious()) {
			System.out.println(litr.previous());
		}
		
		LinkedList ll3 = new LinkedList();
		ll3.add(100);
		ll3.add(200);
		ll3.add("iNeuron");
		ll3.add("Bengaluru");
		
		System.out.println("*************************");
		
		Iterator ditr=ll3.descendingIterator();	
		
		while(ditr.hasNext()) {
		System.out.println(ditr.next());	
		}
	}
}

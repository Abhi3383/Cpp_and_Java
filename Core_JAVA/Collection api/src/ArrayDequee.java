import java.util.ArrayDeque;

public class ArrayDequee {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayDeque ad = new ArrayDeque();
		ad.add(10);
		ad.add(20);
		ad.add("iNeuron");
		ad.add("Bengaluru");
		
		System.out.println(ad);
		
		ad.addFirst(100);
		ad.addLast(200);
		
		System.out.println(ad);
	}

}

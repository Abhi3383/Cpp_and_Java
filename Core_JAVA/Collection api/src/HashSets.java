import java.util.*;

public class HashSets {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		HashSet hs = new HashSet();
		hs.add(100);
		hs.add(50);
		hs.add(150);
		hs.add(25);

		System.out.println(hs);

		if (hs.contains(10)) {
			System.out.println("In hashset 50 is present");
		} else {
			System.out.println("Element is not present");
		}

		LinkedHashSet lhs = new LinkedHashSet();

		lhs.add(100);
		lhs.add(50);
		lhs.add(150);
		lhs.add(25);

		System.out.println(lhs);
	}

}

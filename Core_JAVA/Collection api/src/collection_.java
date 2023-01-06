import java.util.*;

public class collection_ {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		ArrayList al = new ArrayList();
		al.add(10);
		al.add(5);
		al.add(0);
		al.add(15);
		System.out.println(al);// [10,5,0,15]

		Collections.sort(al);// sorting is done is ascending order
		System.out.println(al);
		System.out.println();
		// --------------------------------------------------------------------

		List<Integer> nums = Arrays.asList(5, 7, 2, 9);
		Collections.sort(nums, (n1, n2) -> n2 - n1);
		System.out.println(nums);
		
		List<Integer> numb = Arrays.asList(15, 17, 12, 19);
		Collections.sort(numb);
		Collections.reverse(numb);
		
		System.out.println(numb);

	}

}

import java.util.*;
public class Launch_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		List<Integer> nums = Arrays.asList(6, 5, 2, 8, 1, 7, 6, 3, 1, 8, 9, 6, 5);
		
		//Method chaining
		int result=nums.stream().filter(n->n%2==1).map(n->n*2).reduce(0, (s,e)->s+e);
		
		System.out.println(result);
	}

}

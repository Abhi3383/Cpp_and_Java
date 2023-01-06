import java.util.*;
import java.util.function.Function;

public class Launch_3 {

	@SuppressWarnings("unused")
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		List<Integer> nums = Arrays.asList(6, 5, 2, 8, 1, 7, 6, 3, 1, 8, 9, 6, 5);

		Function<Integer, Integer> func = new Function<Integer, Integer>() {
			@Override
			public Integer apply(Integer n) {
				System.out.println(n);
				return n * 2;
			}
		};

		// Intermediate and terminate
		int result = nums.parallelStream()// for large numbers(thread is working bts)
				.filter(n -> n % 2 == 1)// Intermediate
				.map(n -> n * 2)// Intermediate
				.reduce(0, (s, e) -> s + e);// Terminate

		System.out.println(result);
	}

}

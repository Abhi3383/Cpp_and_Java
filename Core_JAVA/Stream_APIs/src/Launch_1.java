import java.util.*;
import java.util.stream.Stream;

public class Launch_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		List<Integer> nums = Arrays.asList(6, 5, 2, 8, 1, 7, 6, 3, 1, 8, 9, 6, 5);
		
		//Stream -> A collection or stream of data.
		//Every stream of object can be used only once.
		Stream<Integer> stream1 = nums.stream();

		// Stream filter(Predicate predicate) returns a stream consisting of the
		// elements of this stream that match the given predicate. This is an
		// intermediate operation. These operations are always lazy i.e, executing an
		// intermediate operation such as filter() does not actually perform any
		// filtering, but instead creates a new stream that, when traversed, contains
		// the elements of the initial stream that match the given predicate.
		Stream<Integer> stream2 = stream1.filter(n -> n % 2 == 1);

		// Stream map(Function mapper) returns a stream consisting of the results of
		// applying the given function to the elements of this stream.
		// Stream map(Function mapper) is an intermediate operation. These operations
		// are always lazy. Intermediate operations are invoked on a Stream instance and
		// after they finish their processing, they give a Stream instance as output.
		// mapper is a stateless function which is applied to each element and the
		// function returns the new stream.
		Stream<Integer> stream3 = stream2.map(n -> n * 2);

		// reduce operation applies a binary operator to each element in the stream
		// where the first argument to the operator is the return value of the
		// previous application and second argument is the current stream element.
		// stream reduces to single resultant value, for example, maximum, minimum, sum,
		// product, etc.
		// Reducing is the repeated process of combining all elements.
		int result = stream3.reduce(0, (s, e) -> s + e); // sum + element initially sum =0
		System.out.println(result);
	}

}

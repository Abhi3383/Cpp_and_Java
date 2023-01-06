
class Calc {
	public int add(int ...nums) {
		int sum = 0;
		for (int i : nums) {
			sum = sum + i;
		}
		return sum;
	}
}

public class Varargs_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Calc c = new Calc();
		int nums[] = { 6, 4, 8, 5 };
		int res = c.add(nums);
		System.out.println(res);
	}

}

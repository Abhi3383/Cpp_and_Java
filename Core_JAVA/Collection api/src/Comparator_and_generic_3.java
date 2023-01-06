import java.util.ArrayList;
import java.util.Collections;

class Studen {
	int age;
	String name;
	String tech;

	public Studen(int age, String name, String tech) {
		this.age = age;
		this.name = name;
		this.tech = tech;
	}

	@Override
	public String toString() {
		return "Student [age=" + age + ", name=" + name + ", tech=" + tech + "]";
	}
}

public class Comparator_and_generic_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		ArrayList<Studen> nums = new ArrayList<>();
		nums.add(new Studen(21, "Nagesh", "java"));
		nums.add(new Studen(20, "Akash", "java script"));
		nums.add(new Studen(18, "Amit", "C++"));

		Collections.sort(nums, (s1, s2) -> s1.tech.length()- s2.tech.length());

		System.out.println(nums);
	}
}

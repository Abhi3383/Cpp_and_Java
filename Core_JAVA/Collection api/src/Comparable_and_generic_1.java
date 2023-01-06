import java.util.*;
class Student implements Comparable<Student> {
	int age;
	String name;
	String tech;

	public Student(int age, String name, String tech) {
		this.age = age;
		this.name = name;
		this.tech = tech;
	}

	@Override
	public String toString() {
		return "Student [age=" + age + ", name=" + name + ", tech=" + tech + "]";
	}
	
	public int compareTo(Student that) {
		return this.age-that.age;
		//to compare the name
		//return this.name.compareTo(that.name);
	}

}

public class Comparable_and_generic_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		ArrayList<Student> nums = new ArrayList<>();
		nums.add(new Student(21, "Nagesh", "java"));
		nums.add(new Student(20,"Akash","java script"));
		nums.add(new Student(18,"Amit","C++"));

		Collections.sort(nums);

		System.out.println(nums);
	}

}

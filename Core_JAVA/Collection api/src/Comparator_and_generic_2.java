import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

class Students  {
	int age;
	String name;
	String tech;

	public Students(int age, String name, String tech) {
		this.age = age;
		this.name = name;
		this.tech = tech;
	}

	@Override
	public String toString() {
		return "Student [age=" + age + ", name=" + name + ", tech=" + tech + "]";
	}
	
}

class ComparatorImpl implements Comparator<Studen>{
	public int compare(Studen s1,Studen s2) {
		return s1.age-s2.age;
	}
}

public class Comparator_and_generic_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		ArrayList<Studen> nums = new ArrayList<>();
		nums.add(new Studen(21, "Nagesh", "java"));
		nums.add(new Studen(20,"Akash","java script"));
		nums.add(new Studen(18,"Amit","C++"));

		ComparatorImpl com=new ComparatorImpl();
		Collections.sort(nums, com);

		System.out.println(nums);
	}

}

//if there is no constructor JVM will add 0 parameterized constructor
//but it will not add any parameterized constructor.
//   Alien2 a=new Alien2(); //valid even if there's no constructor in class
//   Alien2 a=new Alien2(10,"hello"); //not allowed till we don;t create parameterized constructor
class Alien2 {
	private int age;
	private String name;

	public Alien2(int age, String name) {
		this.age = age;
		this.name = name;
	}

	public Alien2() {
		age = 28;
		name = "Hyder";
	}

	public int getAge() {
		return age;
	}

	public String getName() {
		return name;
	}

}

public class LaunchConstructors2 {
	public static void main(String args[]) {
		Alien2 a1 = new Alien2(13, "qwerty"); // call to parameterized constructor
		System.out.println(a1.getAge());
		System.out.println(a1.getName());

		// Alien2 a2 = new Alien2(); error - >call to zero parameterized constructor
		// JVM will add zero parameterized constructor in the class by default iff
		// programmer has not specified constructor at all.

		Alien2 a2 = new Alien2(); // calling 0 parameterized constructor
		// since we have created it it will call that one with the values, else it will
		// fetch the value from the created one.
		System.out.println(a2.getAge());
		System.out.println(a2.getName());

	}
}
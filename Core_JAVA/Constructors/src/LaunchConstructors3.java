class Alien3 {
	private int age;
	private String name;

	public Alien3() {
		this(10, "telusko"); // here, this line will call the constructor of same class
		// which is accepting int and string so control will move to public Alien3(int
		// age, String name) {
		// this.age = age;
		// this.name = name;
		// }
		// after setting the value the control return to the original public Alien3()
		// and then this Alien3 a1 = new Alien3();
	}

	public Alien3(int age, String name) {
		this.age = age;
		this.name = name;
	}

	public Alien3(int age) {
		this(); // will move to public Alien3() then again this line will call the constructor
				// of same class
		// which is accepting int so control will move to public Alien3(int
		// age, String name) {
		// this.age = age; //10
		// this.name = name; // Telusko
		// }
		// after setting the value the control return to the original call this();
		// then it will run further for
		// this.age = age; //this will set the value of age to 99
		// then it will move to public Alien3(int age(99))
		// and then this Alien3 a1 = new Alien3(99);
		this.age = age;
	}

	public int getAge() {
		return age;
	}

	public String getName() {
		return name;
	}
}

public class LaunchConstructors3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Alien3 a1 = new Alien3();
		System.out.println(a1.getAge());
		System.out.println(a1.getName());

		Alien3 a2 = new Alien3(178, "qwerty");
		System.out.println(a2.getAge());
		System.out.println(a2.getName());

		Alien3 a3 = new Alien3(99);
		System.out.println(a3.getAge());
		System.out.println(a3.getName());
	}

}

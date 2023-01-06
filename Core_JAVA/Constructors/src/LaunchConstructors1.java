/*Constructors are another form of setters which we prefer.
Constructor is invoked during the creation of object.
     Aliens a = new Aliens(10,"hello");
     Aliens(10,"hello") call to parameterized constructor
     Aliens a =new Aliens();
     Aliens() call to zero parameterized constructor
*/
class Aliens {
	private int age;
	private String name;

	public Aliens(int age, String name) {
		this.age = age;
		this.name = name;
	}

	public int getAge() {
		return age;
	}

	public String getName() {
		return name;
	}

}

public class LaunchConstructors1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Aliens a = new Aliens(10,"Telusko");
		System.out.println(a.getAge());
		System.out.println(a.getName());

	}

}

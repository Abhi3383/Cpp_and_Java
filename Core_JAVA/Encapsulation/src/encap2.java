class Alien {
	private int age;
	private String name;

	public void setAge(int x) {
		age = x;
	}

	public void setName(String x) {
		if (age > 0) {
			name = x;
		} else {
			System.out.println("invalid age");
		}
	}

	public int getAge() {
		return age;
	}

	public String getName() {
		return name;
	}
}

public class encap2 {
	public static void main(String args[]) {
		Alien a = new Alien();
		System.out.println(a.getAge());
		System.out.println(a.getName());

	}
}

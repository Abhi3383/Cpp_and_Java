/*
 * Anonymous inner classes:
=> Sometimes we can declare inner class without name such type of inner classes are
called anonymous inner classes.
=> The main objective of anonymous inner classes is "just for instant use".
=> There are 3 types of anonymous inner classes
1. Anonymous inner class that extends a class.
2. Anonymous inner class that implements an interface.
3. Anonymous inner class that defined inside method arguments.
 */

class popCorn {
	public void taste() {
		System.out.println("Spicy.");
	}
}

public class Launch_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		// creating an object of popcorn
		popCorn p = new popCorn();

		// create an object("p") of class("popCorn") which would extend an class
		// ("popCorn()")
		// we are creating a child class object of popCorn without name and for that
		// child class we are creating an object with parent reference popCorn
		// child class = popCorn() -> it dosen't have any name
		// parent class = popCorn -> it is is parent reference with which child class
		// has created an object
		popCorn q = new popCorn() {

			// 1st inner class
		};

		// creating a child class for popcorn
		// overrding taste()
		// creating an object of child class and collecting it through parent reference
		popCorn r = new popCorn() {

			// it is an inner class
			// class with no name is Anonymous class
			@Override
			public void taste() {

				// 2nd inner class
				System.out.println("Salty.");
				
				//can be called here easily since its just a normal method here.
				m1();
			}
			
			public void m1() {
				System.out.println("Specialized method.");
			}
		};

		r.taste(); // Salty.
		//r.m1() error=> needs to be defined in popCorn parent class first
		System.out.println(r.getClass().getName());// Launch_1$2 bcz of launch_1 class name and 2nd inner class
	}

}

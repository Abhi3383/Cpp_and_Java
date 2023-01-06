
//Declare outer class in inner class directly without any modifier are called regular or inner class
//inside inner class => public static void main(String[] args) {}- will never come or can say static methods
//Inner class => without the existence of outer class object if there's no need of inner class object that is when we go for inner classes.
//outer class
class Launch_1 {
	class Inner {
		public void m1() {
			System.out.println("Inside inner class instance method");
	}

	}

	// In inner working of JVM, Outer class that is Launch_1 will not create object
	// of main method bcz main method is static and it can be directly called using class_name.object_name
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("main method of inner class");

		// Inner inner = new Inner(); => just simply writing it will give error, we to
		// create first obj of inner class to crate an object of inner class
		Launch_1 outer = new Launch_1();
		// now using outer class object we will create inner class object
		Inner inner = outer.new Inner();
		inner.m1();
		
		System.out.println();
		//or we can just simply write
		Launch_1.Inner inn = new Launch_1().new Inner();
		inn.m1();
	}

}

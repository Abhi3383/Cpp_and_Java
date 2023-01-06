class Launch_2 {
	class Inner {
		//instance area of an inner class
		public void m1() {
			System.out.println("Inside inner class instance method");
		}
	}

	//Instance method => non-static
	public void m2() {
		
	}
	//static area of an outer class
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("main method of inner class");

//		Launch_1.Inner inn = new Launch_1().new Inner();
//		inn.m1();
//		instead of writing above 2 lines we can also just simply write

		new Launch_2().new Inner().m1();
//      -------------  ----------  ----
// 			^				^		^
//			|				|		|
//		create an 	  create an   using inner class object
// 		object of  	  object of   make a call to a method.
//	   outer class    inner class
// create an object of outer class using object outer class create an object of inner class
// and using the inner class object make a call to method

	}
}

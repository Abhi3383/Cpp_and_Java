class student {

	static {
		System.out.println("Student class loading");
	}

	public student() {
		System.out.println("student object got created");
	}
}

class test {

	static {
		System.out.println("Student class loading");
	}

	public test() {
		System.out.println("student object got created");
	}
}

public class Launch_2 {

	@SuppressWarnings({ "deprecation", "unused" })
	public static void main(String[] args) throws InstantiationException, IllegalAccessException,
			ClassNotFoundException, ArrayIndexOutOfBoundsException {
		// TODO Auto-generated method stub

		student std = (student) (Class.forName(args[0]).newInstance());
		test t = (test) (Class.forName(args[1]).newInstance());

	}

}
/*
 * Difference between new and newInstance( ) :
 * 
 * new ===>
 * 
 * new is an operator ,which can be used to create an object. We can use new
 * operator if we know the class name at the beginning.
 * 
 * Test t= new Test( );
 * 
 * If the corresponding .class file not available at Runtime then we will get
 * RuntimeException saying NoClassDefFoundError , It is unchecked.
 * 
 * To used new operator the corresponding class not required to contain no
 * argument constructor
 * 
 * 
 * newInstance( ) ===>
 * 
 * newInstance( ) is a method ,present in class Class , which can be used to
 * create an object .
 * 
 * We can use the newInstance( ) method , If we don't class name at the
 * beginning and available dynamically Runtime.
 * 
 * Object o=Class.forName(arg[0]).newInstance( );
 * 
 * If the corresponding .class file not available at Runtime then we will get
 * RuntimeException saying ClassNotFoundException , It is checked. To used
 * newInstance( ) method the corresponding class should compulsory contain no
 * argument constructor , Other wise we will get RuntimeException saying
 * InstantiationException.
 * 
 */
/*
 * Difference between ClassNotFoundException & NoClassDefFoundError :
 * 
 * 1. For hard coded class names at Runtime in the corresponding .class files
 * not available we will get NoClassDefFoundError , which is unchecked
 * 
 * Test t = new Test( );
 * 
 * In Runtime Test.class file is not available then we will get
 * "NoClassDefFoundError"
 * 
 * 2. For Dynamically provided class names at Runtime , If the corresponding
 * .class files is not available then we will get the RuntimeException saying
 * "ClassNotFoundException".
 * 
 * Ex : Object o=Class.forname("Test").newInstance( );
 * 
 * At Runtime if Test.class file not available then we will get the
 * "ClassNotFoundException" , which is checked exception.
 */

/*
 * Difference between instanceof and isInstance( ) :
 * 
 * instanceof
 * 
 * instanceof an operator which can be used to check whether the given object is
 * particular type or not We know at the type at beginning it is available.
 * 
 * eg: String s = new String("sachin");
 *  
   System.out.println(s instanceof Object );//true 
   
   //If we know the type at the beginning only.
 
 
 * isInstance( )
 * 
 * isInstance( ) is a method, present in class Class , we can use isInstance( )
 * method to checked whether the given object is particular type or not We don't
 * know at the type at beginning it is available Dynamically at Runtime.
 * 
 * class Test { public static void main(String[] args) {
 * 
 * Test t = new Test( ) ;
 * 
 * System.out.println(Class.forName(args[0]).isInstance(t));////arg[0] --- We
 * don't know the type at beginning } } 
 * 
 * java Test Test //true 
 * 
 * java Test String//false 
 * 
 * java Test Object //true
 */
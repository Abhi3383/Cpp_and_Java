/*Annotation -> Info about code
 *           -> Can have :
 *              Marker - nothing is there
 *              Single value
 *              Multiple value
 *           -> WORKS ON BASED ON MECHANISM OF INTERFACE
 *           -> Annotation(keyword) - Parent of all annotations
 *           -> Can be applied on : 
 *              interface
 *              enum
 *              class
 *              fields
 *              local
 *              constructor
 *              parameters of method
 *           -> It is case sensitive.
 *           
1) Inbuilt Annotation -> Java given -> just use them
2) Custom Annotation -> our own -> user defined
*/

//its functional interface please don't add more method
@FunctionalInterface
interface Addition {
	void add();
//	int add(int a); error, only one method is allowed

}

class Demo {
	void getInfo() {
		System.out.println("Information in Parent");
	}
}

class Demo2 extends Demo {

	// if we write different method like
    //	@Override
    //	void getInfor() {
    //		System.out.println("Overrided succesfully");
    //	}
	// will get error
	
	@Override
	void getInfo() {
		System.out.println("Overrided succesfully");
	}
}

public class Launch_1 {
	public static void main(String argsp[]) {

		// Below code is adding 2 number
		int a = 10;
		int b = 20;
		int c = a + b;
		System.out.println(c);

		Demo2 d = new Demo2();
		d.getInfo();
	}
}

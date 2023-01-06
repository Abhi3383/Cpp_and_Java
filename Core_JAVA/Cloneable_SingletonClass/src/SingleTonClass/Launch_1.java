package SingleTonClass;

/*
 * 	Singleton classes :
	For any java class if we are allow to create only one object, such type of class is
	said to be singleton class.
	Example:
1) 	Runtime class
2) 	ActionServlet
3) 	ServiceLocator
4) 	BusinessDelegate
 */

public class Launch_1 {

	public static void main(String[] args) throws CloneNotSupportedException {
		// TODO Auto-generated method stub

		// Static factory methods and it is singleton class(Runtime.)
		Runtime r1 = Runtime.getRuntime();
		Runtime r2 = Runtime.getRuntime();

		System.out.println(r1 == r2);
	}	
}

/*
 * Advantage of Singleton class : If the requirement is same then instead of
 * creating a separate object for every person we will create only one object
 * and we can share that object for every required person we can achieve this by
 * using singleton classes.
 * 
 * That is the main advantages of singleton classes are Performance will be
 * improved and memory utilization will be improved.
 */

import java.io.*;
/*                  			     #2						                 #1						Serialization		
 *     	Test=================> object o/p stream ==================> File o/p stream =====================> Test
 *   java object File	     oos.writeObject(test)	
 *                                  #3
 *   
 *   DeSerialization
 *        Test <================= object i/p stream <================== File i/p stream =====================> Test
 *   							 object=readObject()						                                 abc.ser
 */

@SuppressWarnings("serial")
class Dog implements Serializable{
	int i = 10;
	int j = 20;
	
	Dog(){
		System.out.println("Constructor called");
	}
}

public class Launch_01 {

	@SuppressWarnings("resource")
	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub

		// Validity of objects is till JVM is running,i.e., Program is Running.
		Dog d = new Dog();

		System.out.println("Serialization Started");

		FileOutputStream fos = new FileOutputStream("abc.ser");
		ObjectOutputStream oos = new ObjectOutputStream(fos);
		oos.writeObject(d);

		System.out.println("Serialization ended");

		System.out.println();

		System.out.println("DeSerialization Started");

		FileInputStream fis = new FileInputStream("abc.ser");
		ObjectInputStream ois = new ObjectInputStream(fis);
		Dog d1 = (Dog) ois.readObject();

		System.out.println("DeSerialization ended");
		System.out.println(d1.i + "=========>" + d1.j);
	}

}

import java.io.*;

/*
 * Note :Object class doesn't implement Serializable interface.
Case 2:
1. Even though parent class does not implements Serializable we can serialize child
   object if child class implements Serializable interface.
2. At the time of serialization JVM ignores the values of instance variables which
   are coming from non Serializable parent then instead of original value JVM saves 
   default values for those variables to the file.
3. At the time of Deserialization JVM checks whether any parent class is non Serializable or not.
   If any parent class is nonSerializable JVM creates a separate object for every
   non Serializable parent and shares its instance variables to the current object.
4. To create an object for non-serializable parent JVM always calls no arg constructor
   (default constructor) of that non Serializable parent hence every non Serializable parent 
   should compulsory contain no arg constructor otherwise we will get runtime exception 
   "InvalidClassException".
5. If case of non-serializable parent class then just instance control flow will be
   performed and share it's instance variable to the current object.

 */

class Cars{
	int i=10;
	Cars(){
		System.out.println("Cars class constructor.");
	}
}

@SuppressWarnings("serial")
class Volvo extends Cars implements Serializable{
	int j=20;
	Volvo(){
		System.out.println("Volvo class constructor.");
	}
}
public class Launch_10 {

	@SuppressWarnings("resource")
	public static void main(String[] args) throws IOException, ClassNotFoundException{
		// TODO Auto-generated method stub
		
		Volvo v1 = new Volvo();
		v1.i=888;
		v1.j=999;
		
		System.out.println("Serialization Started.");
		FileOutputStream fos=new FileOutputStream("abc.ser");
		ObjectOutputStream oos=new ObjectOutputStream(fos);
		oos.writeObject(v1);
		
		System.out.println("Serialization Ended.");
		
		System.out.println();

		System.out.println("De-Serialization Started.");
		
		FileInputStream fis=new FileInputStream("abc.ser");
		ObjectInputStream ois=new ObjectInputStream(fis);
		
		Volvo v2 = (Volvo)ois.readObject();
		
		System.out.println("De-Serialization Ended.");
		System.out.println(v2.i+"=========>"+v2.j);
		System.out.println(v1.i+"=========>"+v1.j);
		
		
	}

}

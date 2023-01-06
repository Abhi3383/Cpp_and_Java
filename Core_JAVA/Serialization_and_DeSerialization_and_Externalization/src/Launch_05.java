import java.io.*;

// Requirement => if we don't know the sequence of serialization
// Now since all are interconnected all be serialized

/*=> whenever we are serializing Dog object automatically Cat and Rat objects 
 *   will be serialized because these are part of object graph of Dog object.
  => Among Dog, Cat, Rat if at least one object is not serializable then we 
     will get runtime exception saying "NotSerializableException".
 */
@SuppressWarnings("serial")
class Sparrow implements Serializable {
	Tail t = new Tail();
}

@SuppressWarnings("serial")
class Tail implements Serializable {
	Parrot p = new Parrot();
}

@SuppressWarnings("serial")
class Parrot implements Serializable {
	int i = 10;
}

public class Launch_05 {
	@SuppressWarnings("resource")
	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub

		// Validity of objects is till JVM is running,i.e., Program is Running.
		Sparrow d = new Sparrow();

		System.out.println("Serialization Started");

		FileOutputStream fos = new FileOutputStream("abc.ser");
		ObjectOutputStream oos = new ObjectOutputStream(fos);
		oos.writeObject(d);

		System.out.println("Serialization ended");

		System.out.println();

		System.out.println("DeSerialization Started");

		FileInputStream fis = new FileInputStream("abc.ser");
		ObjectInputStream ois = new ObjectInputStream(fis);
		Sparrow d1 = (Sparrow) ois.readObject();

		System.out.println("DeSerialization ended");
		System.out.println(d1.t.p.i);
	}

}

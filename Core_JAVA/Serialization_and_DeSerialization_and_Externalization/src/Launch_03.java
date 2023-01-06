import java.io.*;

@SuppressWarnings("serial")
class Animal implements Serializable {
	int i = 10;

	// transient=> by writing transient, it will not take part in Serialization due
	// to some security reasons.
	// j will part in serialization but its value will not, its will value will
	// never be disclosed.
	transient int j=20 ;

	Animal() {
		System.out.println("Constructor called");
	}
}

public class Launch_03 {

	@SuppressWarnings("resource")
	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub

		// Validity of objects is till JVM is running,i.e., Program is Running.
		Animal d = new Animal();

		System.out.println("Serialization Started");

		FileOutputStream fos = new FileOutputStream("pqr.ser");
		ObjectOutputStream oos = new ObjectOutputStream(fos);
		oos.writeObject(d);

		System.out.println("Serialization ended");

		System.out.println();

		System.out.println("DeSerialization Started");

		FileInputStream fis = new FileInputStream("pqr.ser");
		ObjectInputStream ois = new ObjectInputStream(fis);
		Animal d1 = (Animal) ois.readObject();

		System.out.println("DeSerialization ended");
		System.out.println(d1.i + "=========>" + d1.j);
	}

}

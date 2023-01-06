import java.io.*;

/*
 * Transient vs Final => Final variables will be participated into serialization directly by their values.
 *  				     Hence declaring a final variables as transient there is no use.
 */
@SuppressWarnings("serial")
class Tiger implements Serializable {

	static transient int i = 10;
	transient final int j = 20;

	Tiger() {
		System.out.println("Constructor called");
	}
}

public class Launch_04 {
	@SuppressWarnings({ "resource", "static-access" })
	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub

		// Validity of objects is till JVM is running,i.e., Program is Running.
		Tiger d = new Tiger();

		System.out.println("Serialization Started");

		FileOutputStream fos = new FileOutputStream("pqr.ser");
		ObjectOutputStream oos = new ObjectOutputStream(fos);
		oos.writeObject(d);

		System.out.println("Serialization ended");

		System.out.println();

		System.out.println("DeSerialization Started");

		FileInputStream fis = new FileInputStream("pqr.ser");
		ObjectInputStream ois = new ObjectInputStream(fis);
		Tiger d1 = (Tiger) ois.readObject();

		System.out.println("DeSerialization ended");
		System.out.println(d1.i + "=========>" + d1.j);
	}

}

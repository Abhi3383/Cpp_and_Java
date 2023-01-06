import java.io.*;

@SuppressWarnings("serial")
class Lion implements Serializable {
	int i = 10;
	int j = 20;

	Lion() {
		System.out.println("Constructor called");
	}
}

@SuppressWarnings("serial")
class Cat implements Serializable {
	int i = 30;
	int j = 40;

	Cat() {
		System.out.println("Constructor called");
	}
}

public class Launch_02 {

	@SuppressWarnings("resource")
	public static void main(String[] args) throws IOException,Exception {
		// TODO Auto-generated method stub

		// Validity of objects is till JVM is running,i.e., Program is Running.
		Lion d = new Lion();
		Cat c = new Cat();

		System.out.println("Serialization Started");

		FileOutputStream fos = new FileOutputStream("abc.ser");
		ObjectOutputStream oos = new ObjectOutputStream(fos);
		oos.writeObject(d);
		oos.writeObject(c);

		System.out.println("Serialization ended");

		System.out.println();

		System.out.println("DeSerialization Started");

		FileInputStream fis = new FileInputStream("abc.ser");
		ObjectInputStream ois = new ObjectInputStream(fis);
		
		//we are reading an object and converting it into Lion type
		Lion d1 = (Lion) ois.readObject();
		Cat c1 = (Cat) ois.readObject();

		System.out.println("DeSerialization ended");
		System.out.println(d1.i + "=========>" + d1.j);
		System.out.println(c1.i + "=========>" + c1.j);
	}

}

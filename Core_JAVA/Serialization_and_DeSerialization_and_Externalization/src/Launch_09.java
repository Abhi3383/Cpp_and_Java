/*
 * Serialization w.r.t Inheritance
===============================
Case 1:
 If parent class implements Serializable then automatically every child class by
default implements Serializable.
 That is Serializable nature is inheriting from parent to child.
 Hence even though child class doesn't implements Serializable , we can serialize
child class object if parent class
 implements serializable interface.

 */

import java.io.*;

@SuppressWarnings("serial")
class Car implements Serializable {
	int i = 10;
}

@SuppressWarnings("serial")
class TATA extends Car {
	int j = 20;
}

public class Launch_09 {
	@SuppressWarnings("resource")
	public static void main(String[] args) throws IOException, ClassNotFoundException {

		TATA d = new TATA();
		d.i=100;
		d.j=200;

		System.out.println("Serialization started");

		FileOutputStream fos = new FileOutputStream("abc.ser");
		ObjectOutputStream oos = new ObjectOutputStream(fos);

		oos.writeObject(d);

		System.out.println("Serialization ended");

		System.out.println("******************************");

		System.out.println("DeSerialization started");

		FileInputStream fis = new FileInputStream("abc.ser");
		ObjectInputStream ois = new ObjectInputStream(fis);

		TATA d1 = (TATA) ois.readObject();

		System.out.println(d1.i + "====> " + d1.j);
		System.out.println(d.i + "====> " + d.j);
		System.out.println("DeSerialization ended");
	}
}

/*
 * Even though TATA class does not implements Serializable interface explicitly
 * but we can Serialize TATA object because its parent class Car already
 * implements Serializable interface. 
 * Note :Object class doesn't implement Serializable interface.
 */

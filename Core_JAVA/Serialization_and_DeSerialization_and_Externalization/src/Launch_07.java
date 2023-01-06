import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;

/*
 * We can implements customized serialization by using the following two methods.
1. private void writeObject(ObjectOutputStream os) throws Exception.
 => This method will be executed automatically by jvm at the time of serialization.
 => It is a callback method. Hence at the time of serialization if we want to
    perform any extra work we have to define that in this method only. 
    (prepare encrypted password and write encrypted password separate to the file )
2. private void readObject(ObjectInputStream is) throws Exception.
 => This method will be executed automatically by JVM at the time of Deserialization.
    Hence at the time of Deserialization if we want to perform any extra activity
    we have to define that in this method only.
    (read encrypted password , perform decryption and assign de-crypted password
	to the current object password variable ) 
 */

/*
 * => At the time of Account object serialization JVM will check is there any
writeObject() method in Account class or not.
=> If it is not available then JVM is responsible to perform serialization(default
serialization).
 => If Account class contains writeObject() method then JVM feels very happy and
executes that Account class writeObject() method.
 The same rule is applicable for readObject() method also.
 */

@SuppressWarnings("serial")
class Accounts implements Serializable {
	String name = "sachin";
	transient String password = "tendulkar";

	// at the time of Serialization
	private void writeObject(ObjectOutputStream oos) throws Exception {
		System.out.println("Hey i'm getting called during Serialization.");
		oos.defaultWriteObject();// Setting connectivity between object and serialized file so now with this all
									// the properties of object is now connected to the serialized file. Serializing
									// enter object. All the properties of the Accounts object will be written to
									// the serialized file.
		String enpwd = 123 + password; // encrypted pwd
										// enpwd is in serialized file
		oos.writeObject(enpwd); // writing the encrypted data
	}

	// at the time of De-Serialization
	private void readObject(ObjectInputStream ois) throws Exception {
		System.out.println("Hey i'm getting called during De-Serialization.");
		ois.defaultReadObject(); // all the properties will be readen

		// enpwd="123tendulkar"
		String enpwd = (String) ois.readObject(); // performing decryption
		password = enpwd.substring(3); // writing extra data to object
	}
}

public class Launch_07 {

	@SuppressWarnings("resource")
	public static void main(String[] args) throws IOException, ClassNotFoundException {
		// TODO Auto-generated method stub
		Accounts acc = new Accounts();

		System.out.println(acc.name + "=====> " + acc.password);
		System.out.println("Serialization Started");

		FileOutputStream fos = new FileOutputStream("abc.ser");
		ObjectOutputStream oos = new ObjectOutputStream(fos);
		oos.writeObject(acc); // now this will call
								// private void writeObject(ObjectOutputStream oos) throws Exception {}

		System.out.println("Serialization ended");

		System.out.println("***********************************");

		System.out.println("DeSerialization Started");

		FileInputStream fis = new FileInputStream("abc.ser");
		ObjectInputStream ois = new ObjectInputStream(fis);

		acc = (Accounts) ois.readObject();// this will call
											// private void readObject(ObjectInputStream ois) throws Exception {}

		System.out.println(acc.name + "=====> " + acc.password);
		System.out.println("DeSerialization ended");
	}

}

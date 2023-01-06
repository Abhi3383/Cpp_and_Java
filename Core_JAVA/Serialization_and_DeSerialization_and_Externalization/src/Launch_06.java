import java.io.*;

/*
 * => In the example before serialization Account object can provide proper
username and password.
 But after Deserialization Account object can provide only username but not
password. This is due to declaring password as transient.
 Hence doing default serialization there may be a chance of loss of information
due to transient keyword.
=> We can recover this loss of information by using customized serialization.

 */

@SuppressWarnings("serial")
class Account implements Serializable {
	String name = "sachin";
	transient String password = "tendulkar";
}

public class Launch_06 {
	@SuppressWarnings("resource")
	public static void main(String[] args) throws IOException, ClassNotFoundException {

		Account acc = new Account();

		System.out.println(acc.name + "=====> " + acc.password);
		System.out.println("Serialization Started");

		FileOutputStream fos = new FileOutputStream("abc.ser");
		ObjectOutputStream oos = new ObjectOutputStream(fos);
		oos.writeObject(acc);

		System.out.println("Serialization ended");

		System.out.println("***********************************");

		System.out.println("DeSerialization Started");

		FileInputStream fis = new FileInputStream("abc.ser");
		ObjectInputStream ois = new ObjectInputStream(fis);

		acc = (Account) ois.readObject();

		System.out.println(acc.name + "=====> " + acc.password);
		System.out.println("DeSerialization ended");// sachin=====> null
													// Loss of data during deserialization since after
													// deserialization it should be sachin=====> tendulkar
	}
}

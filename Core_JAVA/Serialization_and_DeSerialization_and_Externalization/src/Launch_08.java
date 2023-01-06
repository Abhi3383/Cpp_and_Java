import java.io.Serializable;
import java.io.FileOutputStream;
import java.io.ObjectOutputStream;
import java.io.FileInputStream;
import java.io.ObjectInputStream;
import java.io.IOException;

@SuppressWarnings("serial")
class Accountss implements Serializable {
	String name = "sachin";
	transient String password = "tendulkar";
	transient int pin = 4444;

	private void writeObject(ObjectOutputStream oos) throws Exception {
		oos.defaultWriteObject();// performing default Serialization
		String epwd = "123" + password;// performing encryption
		int epin = 1234 + pin;// performing encryption
		oos.writeObject(epwd);// write the encrypted data to file(abc.ser)
		oos.writeInt(epin);// write the encrypted data to file(abc.ser)
	}

	private void readObject(ObjectInputStream ois) throws Exception {
		ois.defaultReadObject();// performing default Serialization
		String epwd = (String) ois.readObject();// performing decryption
		int epin = ois.readInt();// performing decryption
		password = epwd.substring(3);// writing the extra data to Object
		pin = epin - 1234;// writing the extra data to Object
	}
}

public class Launch_08 {
	@SuppressWarnings("resource")
	public static void main(String[] args) throws IOException, ClassNotFoundException {
		Accountss acc = new Accountss();
		
		System.out.println(acc.name + "=====> " + acc.password + "======>" + acc.pin);
		
		System.out.println("Serialization Started");
		
		FileOutputStream fos = new FileOutputStream("abc.ser");
		ObjectOutputStream oos = new ObjectOutputStream(fos);
		
		oos.writeObject(acc);
		
		System.out.println("Serialization ended");
		
		System.out.println("***********************************");
		
		System.out.println("DeSerialization Started");
		
		FileInputStream fis = new FileInputStream("abc.ser");
		ObjectInputStream ois = new ObjectInputStream(fis);
		acc = (Accountss) ois.readObject();
		
		System.out.println(acc.name + "=====> " + acc.password + "========>" + acc.pin);
		System.out.println("DeSerialization ended");
	}
}
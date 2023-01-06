
/*
 * Externalization : ( 1.1 v )
1. In default serialization every thing takes care by JVM and programmer doesn't
   have any control.
2. In serialization total object will be saved always and it is not possible to
   save part of the object , which creates performance problems at certain point.
3. To overcome these problems we should go for externalization where every thing
   takes care by programmer and JVM doesn't have any control.
4. The main advantage of externalization over serialization is we can save either
   total object or part of the object based on our requirement.
5. To provide Externalizable ability for any object compulsory the corresponding
   class should implements externalizable interface.
6. Externalizable interface is child interface of serializable interface.
   Externalizable interface defines 2 methods :
1. writeExternal(ObjectOutput out ) throws IOException
2. readExternal(ObjectInput in) throws IOException,ClassNotFoundException
   public void writeExternal(ObjectOutput out) throws IOException
   This method will be executed automaticcay at the time of Serialization with in
   this method , we have to write code to save required variables to the file .
   public void readExternal(ObjectInput in) throws IOException,ClassNotFoundException
   This method will be executed automatically at the time of deserialization with
   in this method , we have to write code to save read
   required variable from file and assign to the current object.
   At the time of deserialization JVM will create a seperate new object by executing 
   public no-arg constructor on that object JVM will call
   readExternal() method.
   Every Externalizable class should compusory contains public no-arg constructor
   otherwise we will get RuntimeExcepion saying "InvaidClassException" .

 */

import java.io.*;

class Demo implements Externalizable {
	String s;
	int i;
	int j;

	public Demo() {
		System.out.println("Constructor called");
	}
	public Demo(String s, int i, int j) {
		this.s = s;
		this.i = i;
		this.j = j;
	}

	// callBack method or magic method
	public void writeExternal(ObjectOutput oo) throws IOException {
		oo.writeObject(s);
		oo.writeInt(i);
	}

	// callBack method or magic method
	public void readExternal(ObjectInput oi) throws IOException, ClassNotFoundException {
		s = (String) oi.readObject();
		i = oi.readInt();
	}

}

public class Launch_11 {

	@SuppressWarnings("resource")
	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub

		Demo d1 = new Demo("sachin", 10, 100);

		System.out.println("Serialization Started.");
		FileOutputStream fos = new FileOutputStream("abc.ser");
		ObjectOutputStream oos = new ObjectOutputStream(fos);
		oos.writeObject(d1);

		System.out.println("Serialization ended");

		System.out.println();

		System.out.println("De-Serialization Started.");

		FileInputStream fis = new FileInputStream("abc.ser");
		ObjectInputStream ois = new ObjectInputStream(fis);

		Demo d2 = (Demo) ois.readObject();
		System.out.println("De-Serialization Ended.");
		System.out.println(d2.s + "==========>" + d2.i + "=======>" + d2.j);

	}
}

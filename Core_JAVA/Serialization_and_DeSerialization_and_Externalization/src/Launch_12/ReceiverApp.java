package Launch_12;

import java.io.*;

public class ReceiverApp {

	public static void main(String[] args) throws IOException, ClassNotFoundException {
		// TODO Auto-generated method stub
		System.out.println("De-Serialization Started");

		FileInputStream fis = new FileInputStream("abc.ser");
		ObjectInputStream ois = new ObjectInputStream(fis);
		
		Buggati d2 = (Buggati) ois.readObject();
		
		System.out.println(d2.i + "========>" + d2.j);
		System.out.println("De-Serailization ended");
	}

}

/*
=> In the above program after serialization even though if we perform any change to
   Dog.class file we can deserialize object.
=> We can configure our own serialVersionUID both sender and receiver not required
   to maintain the same JVM versions.
Note : some IDE's generate explicit serialVersionUID

To see the difference before and after serialVersionUID.

a)Run without serialVersionUID in Dog class file
1) Run Dog class file
2) Run Sender File
3) Run Receiver class file
4) Make changes in Dog class file
5) Run Receiver class file //will get error

a)Run with serialVersionUID in Dog class file
1) Run Dog class file
2) Run Sender File
3) Run Receiver class file
4) Make changes in Dog class file
5) Run Receiver class file //will not get error

*/
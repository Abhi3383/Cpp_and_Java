/*
 * serialVersionUID
  ===================
=> To perform Serialization & Deserialization internally JVM will use a unique
   identifier,which is nothing but serialVersionUID .
=> At the time of serialization JVM will save serialVersionUID with object.
=> At the time of Deserialization JVM will compare serialVersionUID and if it is
   matched then only object will be Deserialized otherwise we will get 
   RuntimeException saying "InvalidClassException".
   The process in depending on default serialVersionUID are :
1. After Serializing object if we change the .class file then we can't perform
   deserialization because of mismatch in serialVersionUID of
   local class and serialized object in this case at the time of Deserialization
   we will get RuntimeException saying in "InvalidClassException".
2. Both sender and receiver should use the same version of JVM if there any
   incompatability in JVM versions then receive anable to
   deserializable because of different serialVersionUID , in this case
   receiver will get RuntimeException saying "InvalidClassException".
3. To generate serialVersionUID internally JVM will use complexAlgorithm which may
   create performence problems.

Serialization
==========
class Dog implements Serializable{
public static final long serialVersionUID
 */

package Launch_12;

import java.io.*;

public class SenderApp {

	@SuppressWarnings("resource")
	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub

		Buggati d1 = new Buggati();

		System.out.println("Serailization Started");

		FileOutputStream fos = new FileOutputStream("abc.ser");
		ObjectOutputStream oos = new ObjectOutputStream(fos);

		oos.writeObject(d1);

		System.out.println("Serailization ended");
	}
}

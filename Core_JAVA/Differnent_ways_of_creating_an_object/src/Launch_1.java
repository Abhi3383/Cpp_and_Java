/*
 * Different ways of Creating an Object
1. using new Operator
   Test t=new Test();

2. using newInstance()
   Class.forName("com.abc.main.Test").newInstance()

3. using clone()
   Test t2=(Test)t1.clone();

4. using factor ymethods
   Runtime r=Runtime.getRuntime();
   DateFormat df=DataFormat.getInstance();

5. using Serialization and DeSerialization
   FileInputStream fis=new FileInputStream("abc.ser");
   ObjectInputStream ois=new ObjectInputStream(fis);
   Test t=(Test)ois.readObject();
 */


public class Launch_1 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub

		// runtime the class name will come plz create an object
		// from the runtime it will come means from the args of
		// public static void main(String[] args){} it will come.
		
		args[0] = "java.lang.string";
		@SuppressWarnings({ "unused", "deprecation" })
		String data = (String)(Class.forName(args[0]).newInstance());
	/*	    ^             ^     --------------------   -------------
		    |-------------|            ^                     ^
	and store it	      |            |					 |
	                      |        Load the class     For the loaded class create an object
	                      |                            (return type is object)
	                      |                                    |
	                      |-------------------------------------
	                        Convert it into the type you want                                  
	*/	
	}

}

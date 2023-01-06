import java.util.*;
public class zTest1 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		Employee e=new Employee();
		;;;;;;;;;;;;;;
		;;;;;;;;;;;
		;;;;
		;;
		
		//even if your object is null jvm will never call the garbage collector to call the object
		e=null;// Garbage object
		
		//so we will call it explicitly
		System.gc();//Informing JVm to active GC thread to clean the garbage object
		Thread.sleep(5000);
		  System.out.println("end of garbage collection");   
	}

}

class Employee{
	@Override
	// finalize() method in Java is a method of the Object class that 
	// is used to perform cleanup activity before destroying any object. 
	public void finalize() {
		System.out.println("Cleaing the object");
	}
	
}

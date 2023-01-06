import java.util.*;
public class Generics {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//Generics Syntax
		//Through Generics we can resolve type casting problems
		//          |
		//          |
		ArrayList<String> al=new ArrayList<String>();
		al.add("Sachin");
		al.add("Tendukar");
		//al.add(10); //CE: cant find symbol
		             //incompatible type : required java.lang.String found:int
		
		String firstName=al.get(0);
		String lastName=al.get(1);
		
		System.out.println(firstName+" "+lastName);
		
		//----------------------------------------------------------------------
		
		List<String> a=new ArrayList<String>();
		Collection<String> b=new ArrayList<String>();
		
		// List<Object> c=new ArrayList<String>(); //invalid
		
		//ArrayList<int> d=new ArrayList<int>(); // invalid
		//cannot use primitive value(type)
		
		ArrayList<Integer> d=new ArrayList<Integer>();
		
		//----------------------------------------------------------------------
		
		
		
	}

}

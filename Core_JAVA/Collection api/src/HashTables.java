import java.util.*;

public class HashTables {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Hashtable ht = new Hashtable();
		ht.put(10, "Sachin");
		ht.put(7, "Dhoni");
        //ht.put(null,"Sachin"); error-> null cant be added in HashTable
		// a major difference b/w HashMap and HashTable
		System.out.println(ht);
		
		//-------------------------------------------------------------------------------------------------------
		
		Hashtable hm = new Hashtable();
		hm.put(new Tempo(5),"A");
		hm.put(new Tempo(2),"B");
		hm.put(new Tempo(3),"C");
		hm.put(new Tempo(1),"D");
		hm.put(new Tempo(4),"E");
		
		System.out.println(hm);
	}
}

class Tempo{
	int i;
	Tempo(int i){
		this.i=i;
	}
	public String toString() {
		return i+" ";
	}
}

import java.util.*;

class demo<T extends Number> {

}

//The Runnable interface should be implemented by any class 
//whose instances are intended to be executed by a thread.
//A Runnable is basically a type of class (Runnable is an Interface) that can be put into a thread,
//describing what the thread is supposed to do.
class Trial<T extends Runnable>{
	
}

//Invalid
//class sample <T implements x>{ 
// 
//}

//Invalid
//class Twist<T super x>{
//	
//}

public class zTest4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// error // demo<String> d1 = new demo<String>();
		demo<Integer> d2 = new demo<Integer>();// valid
		demo<Double> d3 = new demo<Double>();// valid
		demo<Number> d4 = new demo<Number>();// valid
		
		Trial<Runnable> t1=new Trial<Runnable>();//valid
		Trial<Thread> t2=new Trial<Thread>();//valid
		// Trial<String> t3= new Trial<String>();//invalid
		
		
	}

}

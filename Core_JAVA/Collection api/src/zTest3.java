import java.util.*;
class Gen<T>
{
	T obj;
	Gen(T obj){
		this.obj=obj;
	}
	
	public void show() {
		System.out.println("The type of object is :: "+obj.getClass().getName());
	}
	
	public T getObj() {
		return obj;
	}
	
}
public class zTest3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Gen<Integer> g1=new Gen<Integer>(10);
		g1.show();
		System.out.println(g1.getObj());
		
		Gen<String> g2=new Gen<String>("Sachin");
		g2.show();
		System.out.println(g2.getObj());
	}

}

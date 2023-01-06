

public class Boxing_Unboxing_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Integer x = new Integer(10);//new object
		Integer y = new Integer(10);//new object
		System.out.println(x==y);
		x++;
		System.out.println(x);
		System.out.println(y);
		System.out.println(x==y);
		System.out.println();
		
		Integer a = new Integer(10);
		Integer b = 10; //Integer.valueof(10);
		System.out.println(a==b);
		System.out.println();
		
		Integer c = new Integer(10);
		Integer d = c; //telling d to point where c is pointing
		System.out.println(c==d);
	}

}

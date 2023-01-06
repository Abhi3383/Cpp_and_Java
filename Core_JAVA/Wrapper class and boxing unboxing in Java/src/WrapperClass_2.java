

public class WrapperClass_2 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Integer i = new Integer(130);
		System.out.println(i.byteValue());
		System.out.println(i.shortValue());
		System.out.println(i.intValue());
		System.out.println(i.longValue());
		System.out.println(i.floatValue());
		System.out.println(i.doubleValue());
		System.out.println();

		Character c1 = new Character('c');
		char c2 = c1.charValue();
		System.out.println(c2);
		
		Boolean b1 = new Boolean("nitin");
		Boolean b2 = b1.booleanValue();
		System.out.println(b2);

	}

}

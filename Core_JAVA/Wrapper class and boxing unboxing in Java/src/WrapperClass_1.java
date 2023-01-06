

public class WrapperClass_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		// Constructor usage of Wrapper class
		Integer i1 = new Integer(10);
		Integer i2 = new Integer(10);

		// usage of utility methods to create wrapper object
		Integer i3 = Integer.valueOf(10);
		Integer i4 = Integer.valueOf("10");

		Double d1 = Double.valueOf(10.5);
		Boolean b1 = Boolean.valueOf("NITIN");
		Character c1 = Character.valueOf('a');


		Integer i6 = new Integer(10);
		Integer i7 = new Integer(10);
		
		System.out.println(i1);
		System.out.println(i2);
		System.out.println();
		System.out.println(i3);
		System.out.println(i4);
		System.out.println();
		System.out.println(d1);
		System.out.println(b1);
		System.out.println(c1);
		System.out.println();
		System.out.println(i6.equals(i7));

	}

}

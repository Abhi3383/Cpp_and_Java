

public class WrapperClass_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Integer i = Integer.valueOf("10");
		System.out.println(i);// (10 in String format)
		System.out.println(i.toString());// (10 in String format)
		System.out.println();

		String s1 = Integer.toString(10);// (10 in String format)
		String s2 = Boolean.toString(true);// (true in String format)
		String s3 = Character.toString('a');

		System.out.println(s1);
		System.out.println(s2);
		System.out.println(s3);
	}

}

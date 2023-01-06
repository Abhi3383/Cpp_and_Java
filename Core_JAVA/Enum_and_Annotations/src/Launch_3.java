enum Gender {
	// ^
   //  |
  //class Results extends enum{} 
 //enum is present in java.lang package
	MALE, FEMALE, OTHERS;// they are static
	//public final static Gender MALE = new Gender();
}

public class Launch_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Gender g =Gender.MALE;
		System.out.println(g);
		System.out.println();

		int grr=Gender.FEMALE.ordinal();
		System.out.println("FEMALE : "+grr);
		
		@SuppressWarnings("static-access")
		Gender[]gr=Gender.values(); // .values() is giving entire array
		for (Gender i : gr) {
			System.out.println(i+" "+i.ordinal());
		}
	}

}

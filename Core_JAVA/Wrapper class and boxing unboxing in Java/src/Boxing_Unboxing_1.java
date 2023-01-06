

public class Boxing_Unboxing_1 {

	static Integer I = 10; // AutoBoxing(valueOf())
	static Integer J = null; // AutoBoxing(valueOf())
	//Integer I = Integer.valueof(null)

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int i = I;// AutoUnboxing(intValue())
		System.out.println(i);
		int j =J;// AutoUnboxing(intValue())
		//error -> Null Pointer Exception
		System.out.println(j);
	}

}

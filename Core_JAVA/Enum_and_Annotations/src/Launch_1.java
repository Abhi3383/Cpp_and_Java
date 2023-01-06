
enum Result {
	PASS, FAIL, NR;
}

public class Launch_1 {

	enum Gender {
		MALE, FEMALE, OTHERS;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// enum is abstract class so thats why we cannot make its object
		// Result r = new Result();
		// but we can call its method using class_name.method_name
		// it has return type result so we will write Result on LHS
		Result r = Result.PASS;
		System.out.println(r);

		Gender g = Gender.MALE;
		System.out.println(g);
		int i = Gender.MALE.ordinal();
		System.out.println(i);//will return index
	}

}

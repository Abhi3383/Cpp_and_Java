
//We cannot create object of interface
//We cannot create object of enums explicitly

enum Result1 {
	PASS, FAIL, NR; // they act like final reference variable and object of final class will get
					// created, so we can have all the methods

	// its like 3 objects are created of Result1 class so 3 times the constructor
	// has executed
	Result1() {
		System.out.println("Lets see how many time it is getting executed.");
		// the number of Pre-defined contant's is equal to the number of times the
		// constructor will run
	}
}

public class Launch_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Result1 r = Result1.PASS;
		//Result1 rr = new Result1(); error
		
		switch(r) {
		case PASS: System.out.println("Passed");
		break;
		case FAIL: System.out.println("Failed");
		break;
		case NR: System.out.println("Not responding");
		break;
		}
	}

}

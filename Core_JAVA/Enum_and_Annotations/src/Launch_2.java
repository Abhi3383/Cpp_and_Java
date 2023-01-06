enum Results {

	PASS, FAIL, NR; // these are called Pre-defined constants

	int marks;

	Results() {
		System.out.println("Constructor is getting called");
	}

	void setMarks(int marks) {
		this.marks = marks;
	}

	int getMarks() {
		return marks;
	}
}

public class Launch_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Results.PASS.setMarks(45);//since it dosen't have any return type 
		int marks = Results.PASS.getMarks();
		System.out.println(marks);
	}

}

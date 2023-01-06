
import java.util.*;

class Books {
	// providing security so that nobody can access it
	private int pgNo;

	// to access it we are creating this function
	// to take the value from outside and give it to my property
	public void setPgNo(int x) {
		if (x > 0) {
			pgNo = x;
		} else {
			System.out.println("inavlid i/p to my property");
		}
	}

	// when called getPgNo() return pgNo
	public int getPgNo() {
		return pgNo;
	}
}

public class basic {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		Books b = new Books();
		System.out.println("Please enter the pgNo");
		int a = sc.nextInt();
		b.setPgNo(a);
		System.out.println(b.getPgNo());
		sc.close();
	}
}

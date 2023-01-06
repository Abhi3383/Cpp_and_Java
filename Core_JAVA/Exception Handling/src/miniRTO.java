import java.util.Scanner;

@SuppressWarnings("serial")
class UnderAgeException extends Exception {
	UnderAgeException(String msg) {
		super(msg);
	}
}

@SuppressWarnings("serial")
class OverAgeException extends Exception {
	OverAgeException(String msg) {
		super(msg);
	}
}

class LApp {
	int age;

	@SuppressWarnings("resource")
	public void input() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Dear kindly enter your age to check eligibility");
		age = sc.nextInt();
	}

	public void verify() throws OverAgeException, UnderAgeException {
		if (age >= 18 && age <= 60) {
			System.out.println("You're eligible");
		} else if (age < 18) {
			throw new UnderAgeException("Dude! calm down take it slow kid");
		} else if (age > 60) {
			throw new OverAgeException("Your time is near be casreful !!!");
		}
	}
}

class RTO {
	void initiate() {
		LApp la = new LApp();
		try {
			la.input();
			la.verify();
		} catch (UnderAgeException a) {
			System.out.println(a.getMessage());
			try {
				la.input();
				la.verify();
			} catch (UnderAgeException b) {
				System.out.println("Seems suspicious");
				System.exit(0);
			} catch (OverAgeException c) {
				System.out.println("Seems suspicious");
				System.exit(0);
			}
		} catch (OverAgeException oae) {
			System.out.println(oae.getMessage());
			try {
				la.input();
				la.verify();
			} catch (UnderAgeException b) {
				System.out.println("Seems suspicious");
				System.exit(0);
			} catch (OverAgeException c) {
				System.out.println("Seems suspicious");
				System.exit(0);
			}
		}
	}
}

public class miniRTO {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		RTO r = new RTO();
		r.initiate();
       }
   }
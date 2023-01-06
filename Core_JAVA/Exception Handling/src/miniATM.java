import java.util.Scanner;

//whenever we are passing msg in our customException constructor whose destination is variable in throwable class.
// msg is being printed by a method called getMessage(); which is a inbuilt method
@SuppressWarnings("serial")
class InvalidUserException extends Exception {
	InvalidUserException(String msg) {
	super(msg); //calling the parent class which is exception
	            // and we are passing mas in Exception -> Exception(string msg)
	            // Exception has this but we can't see otherwise we would have gotten the error
	            // Exception(String msg){
	            //    super (msg) -> this will call his parent which is Throwable
	            // }
	            // Now in throwable class there is variable with a name String detailed msg and a constructor
	            //which will be like this throwable(String s){
                //	                                             detailed msg =s;
	            //                                            }
	}
}

class ATM {
	private int accountNum = 1111;
	private int password = 2222;
	private int accNum;
	private int pwd;

	@SuppressWarnings("resource")
	public void input() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the account number");
		accNum = sc.nextInt();
		System.out.println("Enter the password");
		pwd = sc.nextInt();
	}

	public void verify() throws InvalidUserException {
		if (accountNum == accNum && password == pwd) {
			System.out.println("Collect your cash");
		} else {
//			InvalidUserException iue = new InvalidUserException();// generating the exception
//			System.out.println("Invalid credentials");
//			throw iue; // throwing to the caller
			throw new InvalidUserException("Inavlid credemtials! Are you the real owner of the account ?");
		//throwing an exception object manually and creating an exception object explicitly
		// from this InvalidUserException("Inavlid credemtials! Are you the real owner of the account ?")
	    // it will go to InvalidUserException(String msg) which is in class InvalidUserException extends Exception
		}
	}
}

class Bank {
	public void initiate() {
		ATM a = new ATM();
		try {
			a.input();
			a.verify();
		} catch (InvalidUserException e) { // since thrown to the caller it will now got to the catch block
			try { // give user another chance
				System.out.println(e.getMessage());
				a.input();
				a.verify();
			} catch (InvalidUserException f) {
				try { // give user another chance
					System.out.println(f.getMessage());
					a.input();
					a.verify();
				} catch (InvalidUserException g) {
					System.out.println("Card is blocked TATA BYE BYE");
					System.exit(0);
				}
			}
		}
	}
}

public class miniATM {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Bank b = new Bank();
		b.initiate();
	}

}

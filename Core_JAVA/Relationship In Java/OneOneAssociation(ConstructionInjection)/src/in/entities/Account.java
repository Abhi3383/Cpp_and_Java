package in.entities;

//Dependent object
public class Account {
	
	//instance variables
	private String accNo;
	private String accType;
	private String accName;
	
	//Performing Constructor Injection using getter method
	public Account(String accNo, String accType, String accName) {
		System.out.println("Account :: Constructor");
		this.accNo = accNo;
		this.accType = accType;
		this.accName = accName;
	}

	//Setting the data to the users
	public String getAccNo() {
		return accNo;
	}

	public String getAccType() {
		return accType;
	}

	public String getAccName() {
		return accName;
	}
	
}

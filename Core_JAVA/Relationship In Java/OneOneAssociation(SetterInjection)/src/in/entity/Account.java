package in.entity;

//Dependent object
public class Account {
	
	//instance variables
	private String accNo;
	private String accType;
	private String accName;
	
	//Performing Setter Injection using setter method
	public void setAccNo(String accNo) {
		this.accNo = accNo;
	}

	public void setAccType(String accType) {
		this.accType = accType;
	}

	public void setAccName(String accName) {
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

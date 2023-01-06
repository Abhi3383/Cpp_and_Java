package in.entities;

//Target Class
public class Employee {
	
	private Integer eid;
	private String ename;
	private String eaddress;
	
	//HAS-A variable injection
	private Account account;

	//Performing constructor Injection(alt+shift+s,o)
	public Employee(Integer eid, String ename, String eaddress, Account account) {
		System.out.println("Employee :: Constructor");
		this.eid = eid;
		this.ename = ename;
		this.eaddress = eaddress;
		this.account = account;
	}
	
	//code for display the data of the employee
	public void display() {
		System.out.println("***********Employee details are***********");
		System.out.println("Eid is ::  " + eid);
		System.out.println("Ename is :: " + ename);
		System.out.println("Eaddress is :: " + eaddress);
		System.out.println("***********Account Details are***********");
		System.out.println("AccNo is ::  " + account.getAccNo());
		System.out.println("AccType is :: " + account.getAccType());
		System.out.println("AccName is :: " + account.getAccName());

	}
}

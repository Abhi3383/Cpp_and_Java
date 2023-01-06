package in.entity;


//Target Class
public class Employee {
	
	private Integer eid;
	private String ename;
	private String eaddress;
	
	//HAS-A variable injection
	private Account account;

	public void setEid(Integer eid) {
		this.eid = eid;
	}

	public void setEname(String ename) {
		this.ename = ename;
	}

	public void setEaddress(String eaddress) {
		this.eaddress = eaddress;
	}

	public void setAccount(Account account) {
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

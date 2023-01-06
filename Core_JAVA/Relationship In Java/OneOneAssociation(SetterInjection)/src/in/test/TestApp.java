package in.test;
import in.entity.*;

public class TestApp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//Creating an dependent object through constructor
		Account account = new Account();
		
		//Performing setter injection to inject the values
		account.setAccName("Sachin");
		account.setAccNo("ISB-222");
		account.setAccType("current");
		
		//Create a target object and inject the dependent object in the constructor
		Employee employee = new Employee();
		employee.setEid(10);
		employee.setEname("Sachin");
		employee.setEaddress("IND");
		
		//Performing setter injection to account
		employee.setAccount(account);
		
		//checking the data of employee to see the injection happened or not
		employee.display();
		

	}

}

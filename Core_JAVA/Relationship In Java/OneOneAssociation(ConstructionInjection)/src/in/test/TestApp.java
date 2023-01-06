package in.test;

import in.entities.*;

public class TestApp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		// Creating an Dependent object through constructor
		Account account = new Account("ISB-111", "savings", "sachin");

		// Create a target object and inject the dependent object in the constructor
		Employee employee = new Employee(10, "sachin", "MI", account);

		// Checking the data of employee to see whether injection happened or not
		employee.display();
	}

}

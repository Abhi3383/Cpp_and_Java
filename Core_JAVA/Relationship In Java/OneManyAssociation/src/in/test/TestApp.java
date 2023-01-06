package in.test;

import in.entities.*;

public class TestApp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		// Creating an Dependent Object using Constructor injection
		Employee emp1 = new Employee(10, "Sachin");
		Employee emp2 = new Employee(20, "Hyder");
		Employee emp3 = new Employee(30, "Naveen");

		// Creating an array to perform One-Many Association
		Employee[] employees = new Employee[3];
		employees[0] = emp1;
		employees[1] = emp2;
		employees[2] = emp3;

		// Creating an Target object using an Target injection
		Department department = new Department(123, "BCCI", "Dubai", employees);

		department.display();
	}

}

package in.entities;

//Target class
public class Department {

	private Integer deptNo;
	private String deptName;
	private String deptLoc;

	// HAS-A variable
	private Employee[] employees;

	public Department(Integer deptNo, String deptName, String deptLoc, Employee[] employees) {
		this.deptNo = deptNo;
		this.deptName = deptName;
		this.deptLoc = deptLoc;

		// HAS-A variable injection through constructor
		this.employees = employees;
	}

	public void display() {
		System.out.println("*************Department Details*************");
		System.out.println("DeptNo is :: " + deptNo);
		System.out.println("DeptName is :: " + deptName);
		System.out.println("DeptLoc is :: " + deptLoc);

		System.out.println("********************************************");
		System.out.println("*****************Employee Details*****************");
		for (Employee employee : employees) {
			System.out.println("EID is :: " + employee.getId());
			System.out.println("ENAME is :: " + employee.getEname());
		}
	}
}

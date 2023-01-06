package in.entities;

//Dependent class
public class Employee {
	private Integer id;
	private String ename;

	// Constructor injection
	public Employee(Integer id, String ename) {
		this.id = id;
		this.ename = ename;
	}

	// getters to get the value
	public Integer getId() {
		return id;
	}

	public String getEname() {
		return ename;
	}

}

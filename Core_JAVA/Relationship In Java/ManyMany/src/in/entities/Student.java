package in.entities;

public class Student {
	private String sname;
	private Integer sid;
	private Integer sage;

	// has-a-variable
	private Course[] courses;

	// constructor injection
	public Student(Integer sid, String sname, Integer sage, Course[] courses) {
		this.sid = sid;
		this.sname = sname;
		this.sage = sage;
		this.courses = courses;
	}

	public void display() {
		System.out.println("*********Student details are *********");
		System.out.println("SID is :: " + sid);
		System.out.println("SName is :: " + sname);
		System.out.println("SAge is ::" + sage);

		System.out.println("*********Course details are *********");
		for (Course course : courses) {
			System.out.println("CID is :: " + course.getCid());
			System.out.println("CName is :: " + course.getCname());
			System.out.println("Cost is :: " + course.getCost());
		}
	}

}

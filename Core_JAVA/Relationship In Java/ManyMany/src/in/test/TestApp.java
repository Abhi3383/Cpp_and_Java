package in.test;

import in.entities.*;

public class TestApp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		// Create a dependent object
		Course c1 = new Course("INJAVA", "Java", 500);
		Course c2 = new Course("INPython", "Python", 1000);
		Course c3 = new Course("INJS", "JavaScript", 1500);

		// Creating an Array to perform Many Association to the target project
		Course[] courses1 = new Course[2];
		courses1[0] = c1;
		courses1[1] = c2;

		Course[] courses2 = new Course[2];
		courses2[0] = c2;
		courses2[1] = c3;
		
		Course[] courses3 = new Course[3];
		courses3[0] = c1;
		courses3[1] = c2;
		courses3[2] = c3;
		
		//Creating an Target object to hold many courses
		Student s1 = new Student(10, "sachin", 49, courses1);
		Student s2 = new Student(07, "Dhoni", 41, courses2);
		Student s3 = new Student(18, "Kohli", 35, courses3);

		s1.display();
		System.out.println();
		s2.display();
		System.out.println();
		s3.display();
		System.out.println();

	}

}

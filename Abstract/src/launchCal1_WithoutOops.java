import java.util.Scanner;

class Rectangle {
	float len;
	float brd;
	float area;
	
	Scanner sc = new Scanner(System.in);
	void input() {
		System.out.println("Please enter the length of the rectangle");
		len = sc.nextFloat();
		System.out.println("Please enter the breadth of the rectangle");
		brd = sc.nextFloat();
	}

	void compute() {
		area = len * brd;
	}

	void display() {
		System.out.println("Area of rectangle is " + area);
	}
}

class Square{
	float len;
	float area;
	Scanner sc = new Scanner(System.in);
	void input() {
		System.out.println("Please enter the length of the square ");
		len = sc.nextFloat();
	}

	void compute() {
		area = len * len;
	}

	void display() {
		System.out.println("Area of square is " + area);
	}
}

class Circle{
	float rad;
	float area;

	Scanner sc = new Scanner(System.in);
	void input() {
		System.out.println("Please enter the radius of the rectangle");
		rad = sc.nextFloat();
	}

	void compute() {
		area = 3.14f*rad*rad;
	}

	void display() {
		System.out.println("Area of circle is " + area);
	}
}

public class launchCal1_WithoutOops {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Rectangle r = new Rectangle();
		Square s = new Square();
		Circle c = new Circle();
		
		r.input();
		r.compute();
		r.display();
		
		s.input();
		s.compute();
		s.display();
		
		c.input();
		c.compute();
		c.display();
	}

}

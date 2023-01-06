import java.util.Scanner;

abstract class Shapes {
	float area;

	abstract void input();

	abstract void compute();

	void display() {
		System.out.println("The area is " + area);
	}
}

class Rectangles extends Shapes {
	float len;
	float brd;
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
}

class Squares extends Shapes {
	float len;

	Scanner sc = new Scanner(System.in);
	void input() {
		System.out.println("Please enter the length of the square ");
		len = sc.nextFloat();	}

	void compute() {
		area = len * len;
	}

}

class Circles extends Shapes {
	float rad;
	final float pi = 3.14f;

	Scanner sc = new Scanner(System.in);

	void input() {
		System.out.println("Please enter the radius of the rectangle");
		rad = sc.nextFloat();
	}

	void compute() {
		area = pi * rad * rad;
	}

}

class Geometry // to achieve polymorphism
{
	void permit(Shapes s) {
		s.input();
		s.compute();
		s.display();
	}
}

public class launchCal2_WithOops {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Rectangles r = new Rectangles();
		Squares s = new Squares();
		Circles c = new Circles();

		Geometry g = new Geometry();
		g.permit(r);
		g.permit(s);
		g.permit(c);
	}

}

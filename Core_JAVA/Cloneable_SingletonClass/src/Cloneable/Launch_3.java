package Cloneable;
//Deep cloning

class Car {
	int j;

	Car(int j) {
		this.j = j;
	}

}

class Duke implements Cloneable {
	Car c;
	int i;

	Duke(Car c, int i) {
		this.c = c;
		this.i = i;
	}

	// clone has protected access in object so we just ovveride it
	@Override
	public Object clone() throws CloneNotSupportedException {
		Car c2 = new Car(c.j);
		Duke d2 = new Duke(c2, i);

		return d2;
	}
}

public class Launch_3 {

	public static void main(String[] args) throws CloneNotSupportedException {
		// TODO Auto-generated method stub
		Car c = new Car(10);
		Duke d = new Duke(c, 20);
		Duke d1 = (Duke) d.clone();
		d1.c.j = 100;
		d1.i = 200;
		System.out.println(d.c.j + "======>" + d.i);
		System.out.println(d1.c.j + "======>" + d1.i);
	}
}

/*
 * Deep Cloning :
 * 
 * 1. The process of creating exactly independent duplicate object(including
 * contained objects also) is called deep cloning.
 * 
 * 2. In Deep cloning , if main object contain any reference variable then the
 * corresponding Object copy will also be created in cloned object.
 * 
 * 3. Object class clone( ) method meant for Shallow Cloning , if we want Deep
 * cloning then the programmer is responsible to implement by overriding clone(
 * ) method.
 */

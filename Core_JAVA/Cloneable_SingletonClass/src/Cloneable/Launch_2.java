package Cloneable;
//Shallow cloning

class Cat {
	int j;

	Cat(int j) {
		this.j = j;
	}

}

class Dog implements Cloneable {
	Cat c;
	int i;

	Dog(Cat c, int i) {
		this.c = c;
		this.i = i;
	}

	// clone has protected access in object so we just ovveride it
	@Override
	public Object clone() throws CloneNotSupportedException {
		return super.clone();
	}
}

public class Launch_2 {

	public static void main(String[] args) throws CloneNotSupportedException {
		// TODO Auto-generated method stub
		Cat c = new Cat(10);
		Dog d = new Dog(c, 20);
		Dog d1 = (Dog) d.clone();
		d1.c.j = 100;
		d1.i = 200;
		System.out.println(d.c.j + "======>" + d.i);
		System.out.println(d1.c.j + "======>" + d1.i);
	}
}

/*
 * Note: => Shallow cloning is the best choice , if the Object contains only
 * primitive values.
 * 
 * => In Shallow cloning by using main object reference , if we perform any
 * change to the contained object then those changes will be reflected
 * automatically in cloned copy.
 *
 * => To overcome this problem we should go for Deep cloning
 */

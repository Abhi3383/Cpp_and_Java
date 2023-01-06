package Cloneable;

/*
 * Clone () method:
1. The process of creating exactly duplicate object is called cloning.
2. The main objective of cloning is to maintain backup purposes.
   (i.e., if something goes wrong we can recover the situation by using
   backup copy.)
3. We can perform cloning by using clone() method of Object class. 
   Signature protected native object clone() throws CloneNotSupportedException;
 */
class Launch_1 implements Cloneable {
	int i = 10;
	int j = 20;

	public static void main(String[] args) throws CloneNotSupportedException {
		// TODO Auto-generated method stub
		Launch_1 t1 = new Launch_1();
		Launch_1 t2 = (Launch_1) t1.clone();
		t2.i = 111;
		t2.j = 222;

		System.out.println(t1.i + "=====>" + t1.j);
		System.out.println(t2.i + "=====>" + t2.j);
		System.out.println(t1.hashCode() == t2.hashCode());
	}
}

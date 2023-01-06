/*
 * Method local inner classes:
=> Sometimes we can declare a class inside a method such type of inner classes are
called method local inner classes.
=> The main objective of method local inner class is to define method specific
repeatedly required functionality.
=> Method Local inner classes are best suitable to meet nested method requirement.
=> We can access method local inner class only within the method where we declared
it.
That is from outside of the method we can't access. As the scope of method
local inner classes is very less,
this type of inner classes are most rarely used type of inner classes.
 * 
 */

class Launch_7 {
	
	public void m1() {
	
		class Inner{
			
			public void sum(int x,int y) {
			System.out.println("The sum is :: "+(x+y));
		
			}
		
		}
		//using inner class object calling sum method.
				new Inner().sum(10, 20);
				new Inner().sum(100, 200);
}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//using Launch_7 class calling m1() method
    new Launch_7().m1();
	}

}

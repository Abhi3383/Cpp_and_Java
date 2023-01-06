/*
 * For multiples lines of code {} is mandatory in lambda expression
 * Return statement is optional if it is one line for more than one line we write it
 * instead of writing (int a)->{
   }
   we can just write a->{
   }
 * if there are 2 parameters than we have to write (int a,int b)->{
   }
   or
   (a,b)->{
   }
 * () is mandatory then
 */

interface Compute{
	int add(int num1,int num2); //method
}



public class LambdaDemo3{

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Compute com1 = (num1,num2) -> num1+num2;
		/*
		 * Compute com = new Compute(){ //Anonymous implementation
		 * public int add(int num1,num2){
		 * return num1+num2;
		 * }
		 * };
		 */
		System.out.println(com1.add(6,8));
		Compute com2 = (num1,num2) -> {
			int result = num1+num2;
			return result;
		};
		System.out.println(com2.add(15, 25));
		
	}

}

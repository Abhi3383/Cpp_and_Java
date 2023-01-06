//we can use lambda method with interface which has only one method


interface Computerr{
	void show(int num); //method
}
interface Asus{
	void show(int num1,int num2);
}



public class LambdaDemo2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//Computerr com=(int num)->System.out.println("in show "+num);
		//above line can also be wriiten as
		//Computerr com = (num) -> System.out.println("In show "+num);
		//furhter it can more be shortened as
		
		Computerr com = num -> System.out.println("in show "+num);
		com.show(6);
		Asus a = (num1,num2) ->System.out.println("in show "+num1);
		a.show(8, 9);
		
		/*
		 * Computerr com = new Computerr() {
			public void show(int num) {
				System.out.println("in show"+ num);
			}
		};
		In this " new Computers() {
			public void show
			{}
			};"
			this is something we can assume so we just remove it
			and put "()->" in place of it
			"()" it is defining a method here
		 */
	}

}

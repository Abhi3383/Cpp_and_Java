
public class Launch_9 {

	
	static void display(int []a) {
		int sum=0;
		
		for(int i:a) 
			sum+=i;
		System.out.println("The sum of array is :: "+sum);
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// static method is display in the same class so we can directly call.
		//instead of writing     int[] arr ={10,20,30,40,50};
		//then writing           display(arr);
		//we can directly write
		
		display(new int[]{10,20,30,40,50});
	}
	
}


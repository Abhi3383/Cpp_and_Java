class Computer{
	public void config() {
		System.out.println("i7,32gb,1TB");
	}
}
public class Launch3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Computer com = new Computer() 
		{
			public void config() {
				//over-riding
				System.out.println("i9,64gb,2TB");
			}
		};
		com.config();
	}

}

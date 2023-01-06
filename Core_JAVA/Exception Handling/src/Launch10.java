//finally overpowers return
public class Launch10 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try {
			System.out.println("Inside try");
			return;
		}catch(Exception e) {
			System.out.println("Inside catch");
		}
		finally {
			System.out.println("Inside finally");
		}
	}

}

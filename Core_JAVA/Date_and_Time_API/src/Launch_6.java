import java.time.Year;

public class Launch_6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// pareseInt() used in Java for converting a string value to an integer by using
		// the method parseInt().
		Integer data = Integer.parseInt(args[0]);
		Year year = Year.of(data);

		if (year.isLeap()) {
			System.out.printf("%d is leap year", data);
		} else {
			System.out.printf("%d is not leap year", data);
		}
	}

}

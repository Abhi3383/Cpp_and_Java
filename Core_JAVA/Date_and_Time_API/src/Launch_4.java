import java.time.ZoneId;
import java.time.ZonedDateTime;

public class Launch_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ZoneId zone = ZoneId.systemDefault();
		System.out.println(zone);

		ZonedDateTime zones = ZonedDateTime.now();
		System.out.println(zones);

		System.out.println();

		ZoneId za = ZoneId.of("America/Los_Angeles");
		ZonedDateTime zt1 = ZonedDateTime.now(za);
		System.out.println(za);
		System.out.println(zt1);
	}

}

import java.time.*;

public class Launch_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// creating object of method
		// LocalTime.now() will give LocalTime object
		LocalTime time = LocalTime.now();
		int hh = time.getHour();
		int mm = time.getMinute();
		int ss = time.getSecond();
		int ns = time.getNano();
		System.out.println(hh + ":" + mm + ":" + ss + ":" + ns);

		LocalDateTime dt = LocalDateTime.now();
		System.out.println(dt); // o/p : 2022-12-26T15:10:36.326752100 (T is the separator b/w date & time)
		
		LocalDateTime dt1=LocalDateTime.of(1995, 1,3,12,45);
		System.out.println(dt1);
		System.out.println(dt1.plusMonths(6));//1995/7/3
		System.out.println(dt1.minusMonths(6));//1994/7/3
		System.out.println();
		System.out.println(dt1);
	}

}

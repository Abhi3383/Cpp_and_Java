import java.time.*;
public class Launch_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		LocalDate date = LocalDate.now();
		System.out.println(date);
		
		LocalTime time=LocalTime.now();
		System.out.println(time);
		
		int dd=date.getDayOfMonth();
		int mm=date.getMonthValue();
		int yy=date.getYear();
		
		System.out.println(dd+"-"+mm+"-"+yy);
		System.out.printf("\n%d-%d-%d",dd,mm,yy);
	}

}

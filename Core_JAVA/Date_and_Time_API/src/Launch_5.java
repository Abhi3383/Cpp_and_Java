import java.time.*;

public class Launch_5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LocalDate today=LocalDate.now();
		LocalDate birthday =LocalDate.of(1993, 01, 03);
		
		Period p=Period.between(birthday,today);
	System.out.printf("age is %d years %d months %d days.",p.getYears(),p.getMonths(),p.getDays());
	}

}

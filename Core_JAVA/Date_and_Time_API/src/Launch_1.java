import java.util.Date;
import java.sql.*;
@SuppressWarnings("unused")
public class Launch_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		// java.util.Date utilDate = new java.util.Date();
		// or
		Date utilDate = new Date();
		System.out.println(utilDate);
		System.out.println();
		
		@SuppressWarnings("deprecation")
		long hours= utilDate.getHours();
		System.out.println(hours);//o/p : 1672044945983
		System.out.println();
		
		long time= utilDate.getTime();
		System.out.println(time);
		System.out.println();
		
		java.sql.Date sqlDate = new java.sql.Date(time);
		System.out.println(sqlDate);
		System.out.println();
		
		Date sqlFullDate = new Date(time);
		System.out.println(sqlFullDate);
	}
}

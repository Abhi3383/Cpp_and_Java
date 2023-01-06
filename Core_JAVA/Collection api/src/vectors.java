import java.util.*;

public class vectors {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Vector v = new Vector();
		for (int i = 1; i <= 10; i++) {
			v.addElement(i);
		}
		System.out.println(v); // internally v.toString() is called

		Enumeration e = v.elements();
		while (e.hasMoreElements()) {
			//Object data = e.nextElement();
			 Integer data =(Integer) e.nextElement();
			System.out.println(data);
			if (data%2==0) {
				System.out.println(data+": is an even number.");
			}
		}
	}

}

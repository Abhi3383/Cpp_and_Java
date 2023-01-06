import java.io.*;
import java.util.*;

public class Launch_10 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		File f=new File("info.txt");
		FileReader fr = new FileReader(f);
		
		//the size of the file should be the size of the file you are reading.
		char[] ch = new char[(int) f.length()];
		fr.read(ch);
		System.out.println(ch);
	}

}

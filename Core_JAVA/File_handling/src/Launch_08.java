import java.io.*;
import java.util.*;

public class Launch_08 {

	public static void main(String[] args)throws IOException {
		// TODO Auto-generated method stub
		FileReader fr = new FileReader("info.txt");
		int i=fr.read();
		System.out.println(i); //73 => read only one character
		//to make it read till eof
		
		while(i!=-1) {
			System.out.print((char)i);
			i=fr.read();
		}
		fr.close();
	}

}

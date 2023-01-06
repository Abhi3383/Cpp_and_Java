import java.io.*;
import java.util.*;

public class Launch_12 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br= new BufferedReader(new FileReader("abc.txt"));
		String line= br.readLine(); //this is reading one line
		//checking if that line is not null
		while(line!=null)
		{
			//if it isn't then printing it
			System.out.println(line);
			//again reading the new next line
			line=br.readLine();
		}
		br.close();
	}

}

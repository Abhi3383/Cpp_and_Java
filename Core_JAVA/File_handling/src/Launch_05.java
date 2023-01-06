import java.io.*;
import java.util.Iterator;

public class Launch_05 {

	public static void main(String[] args)throws IOException
	{
		// TODO Auto-generated method stub
		File f=new File("E://IPLTeam");
		String[] data=f.list();
		int count=0;
		for (String fileInfo :  data){
			count++;
			System.out.println(fileInfo);
		}
		System.out.println("Number of files and directories is :: "+count);
	}

}

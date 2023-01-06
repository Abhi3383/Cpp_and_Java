import java.io.*;

public class Launch_01 {

	public static void main(String[] args) throws IOException{
		// TODO Auto-generated method stub
		//syntax : File f = new File("String fname");
		File f = new File("abc.txt");
		System.out.println(f.exists());
		f.createNewFile();
		System.out.println(f.exists());
		/*
		 * 1st run => false 
		 *            true
		 * 2nd run => true 
		 *            true
		 */
		
		//tempDir => Folder
		File g = new File("tempDir");
		System.out.println(g.exists());
		g.mkdir();
		System.out.println(g.exists());
		
	}

}

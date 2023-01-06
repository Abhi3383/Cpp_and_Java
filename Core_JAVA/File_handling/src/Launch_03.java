
import java.io.*;

public class Launch_03 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		
		//Syntax : File f=new File(File f,String fname);
		File f = new File("temDir");
		f.mkdir();

		File g=new File(f,"hello.txt");
		g.createNewFile();
	}

}

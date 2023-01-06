
import java.io.*;

public class Launch_02 {

	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		
		File f = new File("temDir");
		f.mkdir();
		//syntax : File g=new File(String DirName, String fname);
		File g=new File("temDir","temp.txt");
		g.createNewFile();
		
	}

}

import java.io.*;

public class Launch_04 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		File g=new File("E:\\IPLTeam");
		g.mkdir();
		
		File f = new File("E:\\IPLTeam","demo.txt");
		f.createNewFile();
		System.out.println(f.exists());
	}

}

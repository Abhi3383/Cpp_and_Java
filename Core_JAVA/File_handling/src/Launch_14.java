import java.io.*;

public class Launch_14 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
// Requirement => file1.txt ,file2.txt copy all the contents to file3.txt
	
		PrintWriter pw=new PrintWriter("file3.txt");
		
		//copy from file1.txt to file3.txt
		BufferedReader br = new BufferedReader(new FileReader("Cricket.txt"));
		String line = br.readLine();
		while(line!=null) {
			pw.println(line);
			line = br.readLine();
		}
		
		//copy from file2.txt to file3.txt
		br = new BufferedReader(new FileReader("abc.txt"));
		line = br.readLine();
		while(line!=null) {
			pw.println(line);
			line = br.readLine();
		}
		
		//closing the resources
		pw.flush();
		br.close();
		pw.close();
	}

}

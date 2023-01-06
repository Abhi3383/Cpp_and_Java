import java.io.*;

//better than StringBuffer
public class Launch_13 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		
		FileWriter fw = new FileWriter("Cricket.txt");
		PrintWriter out = new PrintWriter(fw);
		
		out.println(10);
		out.println("sachin");
		out.println(true);
		out.println('M');
		
		out.flush();
		out.close();
	}

}

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;

//Requirement => file1.txt file2.txt copy one line from file1.txt and from file2.txt to file3.txt.
public class Launch_15 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub

		PrintWriter pw = new PrintWriter("file4.txt");

		// copy from file1.txt to file3.txt
		BufferedReader br1 = new BufferedReader(new FileReader("Cricket.txt"));
		BufferedReader br2 = new BufferedReader(new FileReader("abc.txt"));

		String line1 = br1.readLine();
		String line2 = br2.readLine();

		while (line1 != null || line2 != null) {
			pw.println(line1);
			pw.println(line2);

			line1 = br1.readLine();
			line2 = br2.readLine();
		}

		// closing the resources
		pw.flush();
		br1.close();
		br2.close();
		pw.close();
	}

}

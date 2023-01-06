import java.io.*;
// Requirement => Write a program to perform extraction of mobile no only if there is no duplicates
class Launch_16 {
	public static void main(String[] args) throws IOException {
		PrintWriter pw = new PrintWriter("output.txt");
//copy from file1.txt to file3.txt
		BufferedReader br1 = new BufferedReader(new FileReader("input.txt"));
		String line = br1.readLine();
		BufferedReader br2 = null;
		while (line != null) {
			boolean isAvailable = false;
			br2 = new BufferedReader(new FileReader("delete.txt"));
			String target = br2.readLine();
			while (target != null) {
				if (line.equals(target)) {
					isAvailable = true;
					break;
				}
				target = br2.readLine();
			}
			if (isAvailable == false) {
				pw.println(line);
				pw.flush();// flush to ensure all data is written to the file
			}
			line = br1.readLine();
		}
//closing the resources
		br1.close();
		br2.close();
		pw.close();
	}
}
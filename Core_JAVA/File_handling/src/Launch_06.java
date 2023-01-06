import java.io.*;
import java.util.*;

public class Launch_06 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		File f1 = new File("E://IPLTeam");
		String[] data = f1.list();
		int dircount = 0;
		int filcount = 0;
		for (String fileInfo : data) {
			File f2 = new File(f1, fileInfo);
			if (f2.isDirectory()) {
				dircount++;
				System.out.println(fileInfo);
			} else if (f2.isFile()) {
				filcount++;
				System.out.println(fileInfo);
			}
		}
		System.out.println("Number of directories is :: " + dircount);
		System.out.println("Number of files is :: " + filcount);

	}

}

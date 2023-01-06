
import java.io.*;
import java.util.*;

public class Launch_07 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		// write => best used for character type of data
		// true => to prevent overriding
		FileWriter fw = new FileWriter("info.txt", true);
		fw.write(73);// ASCII value of character
		fw.write("\n");
		fw.write("iNeuron Technology");
		fw.write("\n");
		char[] ch = { 'a', 'b', 'c', 'd' };
		fw.write(ch);
		fw.write("\n");
		fw.flush(); // makes the buffer empty for further data to store but it does not closes the
					// stream permanently.
		fw.close();

	}

}

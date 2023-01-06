import java.io.*;
import java.util.*;

public class Launch_11 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedWriter br= new BufferedWriter(new FileWriter("abc.txt"));
		br.write(73);
		br.write("neuron");
		br.newLine();
		br.write("technology");
		br.newLine();
		
		char[] ch = {'a','b','c','d'};
		br.write(ch);
		
		br.flush();
		br.close();
	}

}

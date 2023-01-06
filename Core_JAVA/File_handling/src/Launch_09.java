import java.io.*;
import java.util.*;

public class Launch_09 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		FileReader fr = new FileReader("info.txt");
		char[] ch = new char[10];
		fr.read(ch);
		System.out.println(ch);/*
								 * I iNeuron
								 */
		System.out.println();
		char[] c = new char[100];
		fr.read(c);
		System.out.println(c);/*
								 * I 
								 * iNeuron Technology 
								 * abcd 
								 * I 
								 * iNeuron Technology 
								 * abcd 
								 * I 
								 * iNeuron Technology 
								 * abcd
								 * 
								 */

		fr.close();
	}

}

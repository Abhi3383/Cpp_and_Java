@FunctionalInterface
interface CLS//CLS -> Compute length of string
{
	int getLength(String s);
}

public class Launch2Part2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		CLS c = new CLS() { //Anonymous implementation
			public int getLength(String s) {
				int res = s.length();
				return res;
			}
		};
		System.out.println(c.getLength("Alien"));
	}

}

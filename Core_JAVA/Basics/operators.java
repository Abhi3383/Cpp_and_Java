
class operators {
	public static void main(String args[]) {
		// boolean operator -> true/false or 1/0
		boolean result = 8 > 7;
		if (result) {
			System.out.println("8");
		} else {
			System.out.println("7");
		}

		// Compare <,>,<=,>=,!,!=,&&,||
		int n1 = 89;
		int n2 = 23;
		int n3 = 9;
		if (n1 > n2 && n1 > n3) {
			System.out.println(n1);
		} else if (n2 > n3) {
			System.out.println(n2);
		} else
			System.out.println(n3);

		// Ternary operator a>b?a:b
		int age = 89;
		String resulted = age >= 18 ? "allowed" : "not allowed";
		System.out.println(resulted);

		// Switch
		int num = 3;
		switch (num) {
		case 1:
			System.out.println("one");
			break;
		case 2:
			System.out.println("two");
			break;
		case 3:
			System.out.println("three");
			break;
		default:
			System.out.println("get lost");
			break;
		}
	}
}

/*
 * Better way to implement an interface is given below
 * We cannot create object of interface
 * Below method is anonymous(un name / without name) inner class
 */

@FunctionalInterface
interface Alphas {
	void beta();
}

public class Launch2Part1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Alphas a = new Alphas() {
			public void beta() {
				System.out.println("Beta implemetation");
			}
		};
		a.beta();
	}
}

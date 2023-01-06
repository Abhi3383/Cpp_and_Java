package SingleTonClass;

// to make Demos class Doubleton
class Demos {

	private Demos() {

	}

	public static Demos getDemos() {
		if (d1 == null) {
			d1 = new Demos();
			return d1;
		} else if (d2 == null) {
			d2 = new Demos();
			return d2;
		} else {
			if (Math.random() < 0.5) {
				return d1;

			} else
				return d2;
		}
	}

	private static Demos d1 = null;
	private static Demos d2 = null;

}

public class Launch_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		// static factory methods
		System.out.println(Demos.getDemos().hashCode());//1995265320
		System.out.println(Demos.getDemos().hashCode());//746292446
		
		System.out.println(Demos.getDemos().hashCode());
		System.out.println(Demos.getDemos().hashCode());
	}

}

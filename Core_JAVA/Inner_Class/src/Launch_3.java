
class Launch_3 {
	class Inner {
		public void m1() {
			System.out.println("inside inner class instance method.");
		}

	}

	public void m2() {
//		Inner i = new Inner();
//		i.m1();
//		can just write
		new Inner().m1();
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub

//		Launch_3 i = new Launch_3();
//		i.m1();
//		can just write
		new Launch_3().m2();
		new Launch_3().new Inner().m1();
		
	}

}

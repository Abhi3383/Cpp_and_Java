import java.lang.annotation.*;

/* @FunctionalInterface is used on Interface
 * while @Ovveridden is used on method
 * ========================================================
 * While creating annotation 2 things to keep in mind :
 * 1) @Target() -> where to use
 * 2) @Retention() -> till when to use
 */

//annotation which we are using to create our annotation are called meta annotation

@Target({ ElementType.METHOD, ElementType.TYPE, ElementType.FIELD }) // meta annotation
@Retention(RetentionPolicy.RUNTIME) // meta annotation
@interface CricketPlayer {

	// syntax look like a method but it is a variable
	String gameName() default "Cricket"; // property not method
	int runs() default 20000;

}

// @ specifies compiler that annotation type is being created
@CricketPlayer
class Virat {
	private String name;
	private int age;

	public void disp() {
		System.out.println("Virat is Indian.");
	}
}

public class Launch_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Virat v = new Virat();
		v.disp();
		Class c = v.getClass();
		Annotation a=c.getAnnotation(CricketPlayer.class);
		CricketPlayer cp=(CricketPlayer)a;
		System.out.println(cp.gameName());
		System.out.println(cp.runs());
		
	}
}

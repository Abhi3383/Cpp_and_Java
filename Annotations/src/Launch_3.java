import java.lang.annotation.Annotation;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

@Target({ ElementType.METHOD, ElementType.TYPE, ElementType.FIELD }) // meta annotation
@Retention(RetentionPolicy.RUNTIME) // meta annotation
@interface CricketPlayers {

	// String gameName() default "Cricket";
	// int runs() default 20000;
	// can also write
	String gameName();

	int runs();
}

@CricketPlayers(gameName = "CricketPlayers", runs = 20000)
class Virats {
	private String name;
	private int age;

	public void disp() {
		System.out.println("Virat is Indian.");
	}
}

public class Launch_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Virats v = new Virats();
		v.disp();
		Class c = v.getClass();
		Annotation a = c.getAnnotation(CricketPlayers.class);
		CricketPlayers cp = (CricketPlayers) a;
		System.out.println(cp.gameName());
		System.out.println(cp.runs());

	}
}

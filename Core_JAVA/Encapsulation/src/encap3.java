/*whenever there is naming conflict b/w instance variable and local variable
 * there is problem called shadowing problem solved by this term.
variable you are creating in method is k/a local variable 
public void setBrand(String Name) {
		brand = Name;
	}
	here String name is local variable
& the variable in class  is k/a instance variable
private String brand;
    here String brand is instance variable
    
-> Shadowing problem
    
    private int cost;
    public void setCost(int cost) {
		cost = cost; //shadowing problem now arises
	}
	
 solution
    	
    public void setCost(int cost) {
		this.cost = cost; 
	}
	
	private String brand;
	public void setBrand(String brand) {
		brand = brand; //shadowing problem now arises
	}
	
solution
    
    public void setBrand(String brand) {
		this.brand = brand;
	}
    
*/
class Fan {
	private int cost;
	private String brand;

	public void setCost(int cost ) {
		this.cost = cost ;
	}

	public void setBrand(String brand ) {
		this.brand = brand ;
	}

	public int getCost() {
		return cost;
	}

	public String getBrand() {
		return brand;
	}

}

public class encap3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Fan f1 = new Fan();
		f1.setCost(1000);
		f1.setBrand("qwerty");
		System.out.println(f1.getCost());
		System.out.println(f1.getBrand());
	}

}

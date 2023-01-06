public class this2 {
  
    private String name;
    private int age;
  
    // Constructor 1 with String as parameter.
    public this2(String name)
    {
        // This line of code calls the second constructor.
        this(20);
        System.out.println("Name of Student : " + name);
    }
  
    // Constructor 2 with int in parameter.
    public this2(int age)
    {
        System.out.println("Age of student = " + age);
    }
  
    // Constructor 3 with no parameters.
    public this2()
    {
        // This line calls the first constructor.
        this("Geeks");
    }
  
    public static void main(String[] args)
    {
        // This calls the third constructor.
        new this2();
    }
}
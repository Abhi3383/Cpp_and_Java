/*              ^
 * public       |
 * private      |
 * default      |   visibility increases from bottom to top
 * protected    |
  
 * we cannot write public first and rest after, it should start from bottom like protected and start moving to top.
 * Return type of overrriden method must be same as that of parent method.
   for instance in method protected void fly() both child and parent have void return type
 * Return type can be diffrent iff it is co-varient return type (return type if there is-a-relationship -> parent-child relationship).
   for instance in protected Animal fly() , public Tiger fly() we have given the return type as name of the class which satisfies the relationship
 * 
*/

package LaunchA;

class Animal {

}

class Tiger extends Animal // is-a-relationship
{

}

class plane // Parent or we can say super class
{
    protected Animal fly() // protected
    {
        System.out.println("Plane is flying");
        Animal a = new Animal();
        return a;
    }
}

class cargoPlane extends plane // Child extends Parent or we can say sub class
{
    public Tiger fly() // public
    {
        System.out.println("Cargo plane flies at lower height");
        Tiger t = new Tiger();
        return t;
    }
}

public class launchA {
    public static void main(String args[]) {

    }
}

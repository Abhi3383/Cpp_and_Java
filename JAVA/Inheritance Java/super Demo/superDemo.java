
//Whenever, you call the object of sub class it also calls the constructor of super class.
// every constucutor java has super method.
class X{
    public X(){
        System.out.println("in X");
    }
    public X(int i){
        System.out.println("in X int");
    }
}

class Y extends X{
    public Y(){
         //super(); it has but it cannot be seen
        System.out.println("in Y");
    }
    public Y(int i){
        //super(); it has but it cannot be seen but we can write it if want to access it
        super(5);
        System.out.println("in Y int");
    }
}

public class superDemo{
    public static void main(String args[]){
        Y obj = new Y(7);
    }
}
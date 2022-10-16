
class X{
    int i=3;
}

class A extends X{
    //int i=5;
    public void show(){
        System.out.println("in a show");
    }
}

class B extends A{
    int i=7;
    public void printIvalue(){
        int i=9;
        System.out.println(i);
        System.out.println(this.i);
        System.out.println(super.i);
    }
}

public class demo{
    public static void main(String args[]) {
        B obj = new B();
        obj.show();
        System.out.println(obj.i);
        obj.printIvalue();
    }
}
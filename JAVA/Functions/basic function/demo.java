
class laptop {
    // knnows(properties) - Variables
    // does(behaviour) - Methods

    String cpu;
    int ram; // default value of ram and all is 0
    int hdd = 12;

    public void compile() {
        System.out.println("Compiling");
        System.out.println(ram);
        System.out.println(hdd);
    }
}

public class demo {
    public static void main(String args[]) {
        laptop obj = new laptop(); // new laptop() is object and obj is variable of type class
        obj.ram = 16;
        obj.hdd = 112; // overiding the value hdd=12
        obj.compile();
    }
}

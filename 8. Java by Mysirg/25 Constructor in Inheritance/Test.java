public class Test{
    public static void main(String[] args) {
        B b = new B(5, 10);
    }
}

class A{
    int a;
    public A(){
        System.out.println("A class constructor");
    }
    public A(int x){
        a = x;
        System.out.println("A class parameterized constructor");
    }
}

class B extends A{
    int b;
    public B(){
        System.out.println("B class constructor");
    }
    public B(int x,int y){
        super(6); // Calls A's constructor
        b=y;
        System.out.println("B class parameterized constructor");
    }
}
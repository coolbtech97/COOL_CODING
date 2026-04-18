package q2;

public class HelloWorld {
    public static void main(String[] args) {
        A1 a1 = new A1();
        a1.demo();
    }
}

class A1 {
    void demo() {
        B1 b1 = new B1();
        B2 b2 = new B2();

        System.out.println("B1 public method: " + b1.publicMethod());
        System.out.println("B2 public method: " + b2.publicMethod());
    }
}

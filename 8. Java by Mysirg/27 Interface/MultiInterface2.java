public class MultiInterface2 extends A implements I1 {
    public static void main(String[] args) {
        MultiInterface2 obj = new MultiInterface2();
        obj.f1();   // which one will bind?
    }
}

interface I1 {
    default void f1() {
        System.out.println("I1");
    }
}

class A{
    public void f1() {
        System.out.println("A");
    }
}

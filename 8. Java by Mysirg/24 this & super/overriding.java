public class overriding{
    public static void main(String[] args) {
        A a1 = new B();
        a1.f1();
        // Note:: created from class B,
        //        but Reference Type is of A
        //        thatswhy, it will call everything from A, not B
        
    }
}
class A{
    void f1(){System.out.println("A");}
}
class B extends A{
    void f1(){System.out.println("B");}

}
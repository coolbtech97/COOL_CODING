public class Restriction {
    public static void main(String[] args) {
        B b = new B();
    }
}


class A{
    public void f1(){System.out.println("A");}
}
class B extends A{
//  private void f1(){System.out.println("B");}
//error
}


// We cannot Increase Restriction at Inheritance,**********************

// Only descrease Restriction.
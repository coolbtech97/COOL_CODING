package p1;
import p2.B1;
public class A1{
    public static void main(String[] args) {
        B1 a = new B1();
        // or i can also do this
        // without importing that class
        p2.B1 b = new p2.B1();

        a.fb1();
        b.fb1();
    }
}

// 5.  Create two java files A1.java and B1.java .
//     A1 is a main class.
//     A1 and B1 resides in different packages p1 and p2 respectively.
//     Define a method in fb1() in B1 class which prints hello.
//     Instantiate B1 class in main method of A1 class and invoke fb1() method.

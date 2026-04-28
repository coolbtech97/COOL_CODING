public class MultiInterface implements I1, I2 {
    public static void main(String[] args) {
        MultiInterface obj = new MultiInterface();
        obj.f1();   // which one will bind?
    }
}
interface I1 {
    default void f1() {
        System.out.println("I1");
    }
}
interface I2 {
    // default void f1() {
    //     System.out.println("I2");
    // }
}
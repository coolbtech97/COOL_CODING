public class A{
    public static void main(String[] args){
        C c = new C();

        System.out.println(super.c.a);
    }
}

class B{        // parent class
    int a = 10;
}

class C extends B{  // child class
    int a = 20;


}
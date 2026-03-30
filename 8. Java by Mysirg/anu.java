public class anu{
    int x;

    public static void main(String []args){


        B obj = new B();
        System.out.println(obj.k); 
        
    }
}


class A{
    int x=20;
}

class B extends A{
    int x = 30;
    int k = super.x;
}
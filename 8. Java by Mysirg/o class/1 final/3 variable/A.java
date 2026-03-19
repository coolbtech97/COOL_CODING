

//  A variable can be FINAL using final keyword as ---
public class A{
    public static void main(String[] args){
        final int a = 10;
        a=20;   // it cannot be change once its declared...
    }
}


class B{
    int a;                  // constructor gives 'a' default value 0
    final int b;            // constructor DOES NOT gives DEFAULT VALUE
}                           // to FINAL variables
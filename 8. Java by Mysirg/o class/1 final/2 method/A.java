public class A{
    public static void main(String[] args) {
        
    }
}
class B{
    final void show(){

    }
}
class C extends B{
    void show(){    // error , cannot or override the current method

    }
}
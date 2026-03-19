class C{
    void show(){
        System.out.println("C");
    }
}
class B extends C{
    void show(){
        System.out.println("B");
        super.show();
    }
}
class A{
    public static void main(String[] args) {
        B b = new B();
        b.show();
    }
}
class Human{
    int x;
    static int total;
    static class Student{
        String name;
        int id;
        float marks;
        static int count=98;
    }
}
public class nested{
    public static void main(String []args){
        Human x=new Human();
        // Human.class.getConstructors();
        // int y=Human.Student.count;
        System.out.println(x.x);
        Human.Student x2=new Human.Student();
        x2.id=16;
        System.out.println(x2.id=16);

    }
}
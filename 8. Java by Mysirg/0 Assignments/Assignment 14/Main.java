public class Main{
    public static void main(String []args){
        Person p = new Person();
        p.setName("John");
        p.setAge((short)25);
        System.out.println("Name: " + p.getName());
        System.out.println("Age: " + p.getAge());
    }
}

// Question 1
class Person{
    private String name;
    private short age;
    public void setName(String name){this.name = name;}
    public void setAge(short age){this.age = age;}
    public String getName(){return name;}
    public short getAge(){return age;}
}
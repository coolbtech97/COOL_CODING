//  Define super class Person and subclass Employ. Perform constructor chaining

public class Q1{
    public static void main(String[] args) {
        Employ e1 = new Employ();
    }
}

class Person{
    private String name;
    private short age;
    public Person(){
        System.out.println("Person Constructor Called");
    }
    public Person(String name, short age){
        this.name = name;
        this.age = age;
    }
}
class Employ extends Person{
    private double salary;
    private int id;

    public Employ(){
        super();
        System.out.println("Employ Constructor Called");
    }
    public Employ(double salary, int id){
        super("John Doe", (short)30); // Call Person constructor with default values
        this.salary = salary;
        this.id = id;
    }
}
public class Main {
    public static void main(String[] args) {
        System.out.println("Assignment 16 - Inheritance\n");

        solveQ1();
        solveQ2();
        solveQ3();
        solveQ4();
        solveQ5();
    }

    // 1. Person -> Employee
    private static void solveQ1() {
        System.out.println("Q1: Person and Employee");
        Employee emp = new Employee();
        emp.input("Anuj", 23, 55000.0);
        emp.display();
        System.out.println();
    }

    // 2. Account -> Customer
    private static void solveQ2() {
        System.out.println("Q2: Account and Customer");
        Customer customer = new Customer("Amit", "ACC101", 5000.0);

        customer.deposit(1500.0);
        customer.withdraw(2200.0);
        customer.withdraw(6000.0); // should fail
        customer.checkBalance();
        System.out.println();
    }

    // 3. Generalisation with super class PlatformUser
    private static void solveQ3() {
        System.out.println("Q3: Learner and Admin with generalisation");
        Learner learner = new Learner("L01", "Riya", "Java Inheritance");
        Admin admin = new Admin("A01", "Saurabh", "Course Management");

        learner.display();
        admin.display();
        System.out.println();
    }

    // 4. Circle -> ThickCircle
    private static void solveQ4() {
        System.out.println("Q4: Circle and ThickCircle");
        ThickCircle thickCircle = new ThickCircle();
        thickCircle.setRadius(7.0);
        thickCircle.setThickness(1.5);

        System.out.println("Radius: " + thickCircle.getRadius());
        System.out.println("Thickness: " + thickCircle.getThickness());
        System.out.println("Area of circle: " + thickCircle.areaOfCircle());
        System.out.println("Thickness area: " + thickCircle.thicknessArea());
        System.out.println("Hollow space area: " + thickCircle.hollowSpaceArea());
        System.out.println();
    }

    // 5. Contact -> DetailedContact
    private static void solveQ5() {
        System.out.println("Q5: Contact and DetailedContact");
        DetailedContact dc = new DetailedContact();
        dc.setName("Neha");
        dc.setMobile("9999999999");
        dc.setEmail("neha@gmail.com");
        dc.setDateOfBirth("12-08-2004");

        dc.display();
        System.out.println();
    }
}

class Person {
    private String name;
    private int age;

    protected String getName() {
        return name;
    }

    protected void setName(String name) {
        this.name = name;
    }

    protected int getAge() {
        return age;
    }

    protected void setAge(int age) {
        this.age = age;
    }
}

class Employee extends Person {
    private double salary;

    public void input(String name, int age, double salary) {
        setName(name);
        setAge(age);
        this.salary = salary;
    }

    public void display() {
        System.out.println("Name: " + getName());
        System.out.println("Age: " + getAge());
        System.out.println("Salary: " + salary);
    }
}

class Account {
    private String accountNumber;
    private double balance;

    public Account(String accountNumber, double balance) {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    public String getAccountNumber() {
        return accountNumber;
    }

    protected double getBalance() {
        return balance;
    }

    protected void setBalance(double balance) {
        this.balance = balance;
    }
}

/*
 Idea for package issue in Q2:
 If Account and Customer are in different packages, make Customer extend Account so
 protected members remain accessible through inheritance.
*/
class Customer extends Account {
    private String customerName;

    public Customer(String customerName, String accountNumber, double openingBalance) {
        super(accountNumber, openingBalance);
        this.customerName = customerName;
    }

    public void deposit(double amount) {
        if (amount <= 0) {
            System.out.println("Deposit amount must be positive.");
            return;
        }
        setBalance(getBalance() + amount);
        System.out.println("Deposited: " + amount);
    }

    public void withdraw(double amount) {
        if (amount <= 0) {
            System.out.println("Withdrawal amount must be positive.");
            return;
        }
        if (amount > getBalance()) {
            System.out.println("Insufficient balance. Withdrawal failed.");
            return;
        }
        setBalance(getBalance() - amount);
        System.out.println("Withdrawn: " + amount);
    }

    public void checkBalance() {
        System.out.println("Customer Name: " + customerName);
        System.out.println("Account Number: " + getAccountNumber());
        System.out.println("Available Balance: " + getBalance());
    }
}

class PlatformUser {
    private String id;
    private String name;

    public PlatformUser(String id, String name) {
        this.id = id;
        this.name = name;
    }

    protected String getId() {
        return id;
    }

    protected String getName() {
        return name;
    }
}

class Learner extends PlatformUser {
    private String enrolledCourse;

    public Learner(String id, String name, String enrolledCourse) {
        super(id, name);
        this.enrolledCourse = enrolledCourse;
    }

    public void display() {
        System.out.println("Learner ID: " + getId() + ", Name: " + getName() + ", Course: " + enrolledCourse);
    }
}

class Admin extends PlatformUser {
    private String role;

    public Admin(String id, String name, String role) {
        super(id, name);
        this.role = role;
    }

    public void display() {
        System.out.println("Admin ID: " + getId() + ", Name: " + getName() + ", Role: " + role);
    }
}

class Circle {
    private double radius;

    public void setRadius(double radius) {
        this.radius = radius;
    }

    public double getRadius() {
        return radius;
    }

    public double areaOfCircle() {
        return Math.PI * radius * radius;
    }
}

class ThickCircle extends Circle {
    private double thickness;

    public void setThickness(double thickness) {
        this.thickness = thickness;
    }

    public double getThickness() {
        return thickness;
    }

    public double thicknessArea() {
        double outerRadius = getRadius() + thickness;
        return Math.PI * outerRadius * outerRadius - areaOfCircle();
    }

    public double hollowSpaceArea() {
        return areaOfCircle();
    }
}

class Contact {
    private String name;
    private String mobile;

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setMobile(String mobile) {
        this.mobile = mobile;
    }

    public String getMobile() {
        return mobile;
    }
}

class DetailedContact extends Contact {
    private String email;
    private String dateOfBirth;

    public void setEmail(String email) {
        this.email = email;
    }

    public String getEmail() {
        return email;
    }

    public void setDateOfBirth(String dateOfBirth) {
        this.dateOfBirth = dateOfBirth;
    }

    public String getDateOfBirth() {
        return dateOfBirth;
    }

    public void display() {
        System.out.println("Name: " + getName());
        System.out.println("Mobile: " + getMobile());
        System.out.println("Email: " + email);
        System.out.println("Date of Birth: " + dateOfBirth);
    }
}

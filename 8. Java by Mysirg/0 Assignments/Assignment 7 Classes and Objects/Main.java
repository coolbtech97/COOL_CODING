public class Main {
    public static void main(String[] args) {
        //1
        Complex a1 = new Complex(2,9);
        a1.setValue(3,4);
        a1.show();
        //2
        Time t1 = new Time();
        t1.setTime(12, 61, 25);
        t1.show();
        //3
        Cuboid c1 = new Cuboid();
        c1.setValue(12,13,14);
        c1.show();
        //4
        Employ e1=new Employ();
        e1.setValue("Anand",97,100000f);
        e1.show();
        //5
        Contact c2 = new Contact();
        c2.setValue(97,"COOL","8271271774","tbikash.rajoun2@gmail.com");
        c2.show();
        //6
        Question q1 = new Question();
        q1.setQuestion(1, "What is the capital of India?", "Mumbai", "Delhi", "Kolkata", "Chennai", "Delhi");
        q1.displayQuestion();
        //7
        Course course1 = new Course();
        course1.setCourse(101, "Java Basics", 45, 5000f);
        System.out.println("\nCourse Details:");
        System.out.println(" CourseId: " + course1.getCourseId());
        System.out.println(" CourseName: " + course1.getCourseName());
        System.out.println(" Duration: " + course1.getDuration());
        System.out.println(" Fee: " + course1.getFee());
        //8
        Distance d1 = new Distance();
        Distance d2 = new Distance();
        d1.setDistance(2, 450, 80);
        d2.setDistance(1, 300, 50);
        System.out.println("\nFirst Distance:");
        d1.displayDistance();
        System.out.println("Second Distance:");
        d2.displayDistance();
        System.out.println("Added Distance:");
        d1.addDistance(d2).displayDistance();
        //9
        Circle circle1 = new Circle();
        circle1.setRadius(7);
        System.out.println("\nCircle Details:");
        System.out.println(" Radius: " + circle1.getRadius());
        System.out.println(" Area: " + circle1.calculateArea());
        System.out.println(" Circumference: " + circle1.calculateCircumference());
        //10
        Book book1 = new Book();
        book1.setBook(1001, "Java Programming", 399.5f, "James Gosling");
        System.out.println("\nBook Details:");
        System.out.println(" BookId: " + book1.getBookId());
        System.out.println(" Title: " + book1.getTitle());
        System.out.println(" Price: " + book1.getPrice());
        System.out.println(" Author: " + book1.getAuthor());
    }
}

// 1  Define a class Complex to represent a complex number. Declare instance member variables
//     to store real and imaginary part of a complex number. also defie instance member
//     functions to set values of complex number and print values of complex number.

class Complex{
    private int real,img;
    public Complex(){real=0;img=0;}
    public Complex(int a,int b){real=a;img=b;}
    public void setValue(int a,int b){real=a;img=b;}
    void show(){
        System.out.print(real+"i+"+img);
    }
}

// 2.  Define a class Time to represent Time (like 3 hr 4 min 20 sec). Declare appropriate
//     number of instance member variables and also define instance member functions to set
//     values for tim e and display values of time.
class Time{
    private int hr,min,sec;
    Time(){hr=0;min=0;sec=0;}
    Time(int h,int m,int s){hr=h;min=m;sec=s;}
    public void setTime(int h,int m,int s){
        while(s>59){
            m+=1;
            s-=60;
        }
        while(m>59){
            h+=1;
            m-=60;
        }
        this.hr=h;
        this.min=m;
        this.sec=s;
    }
    public void show(){
        System.out.print(hr+" hr "+min+" min "+sec+" sec");
    }
}

// 3.  define a class Cuboid with member variables to store length of its sides. Also define
//     setters, getters and member functions to calculare volume and surface area of cuboid.
class Cuboid{
    private int length,breadth,height;
    public void setValue(int a,int b,int c){
        length=a;
        breadth=b;
        height=c;
    }
    public void show()/* throws InterruptedException*/{
        System.out.println(" Length: "+length);
        System.out.println(" Breadth: "+breadth);
        System.out.println(" Height: "+height);
        // wait();
    }

    // Setters-
    public void setLength(int l){length=l;}
    public void setBreadth(int b){breadth=b;}
    public void setHeight(int h){height=h;}

    // Getters-
    public int getLength(){return length;}
    public int getBreadth(){return breadth;}
    public int getHeight(){return height;}
}

// 4. Define a class Employee with properties empId, name, sallary and define setters and getters.
class Employ{
    private int empid;
    private float sallary;
    private String name;
    public void show(){
        System.out.println(" Name: "+name);
        System.out.println(" EmpId: "+empid);
        System.out.println(" Sallary: "+sallary);
    }
    public void setValue(String s,int id,float sa){name=s;empid=id;sallary=sa;}

    // Setters-
    public void setName(String s){name=s;}
    public void setEmpid(int i){empid=i;}
    public void setSallary(float kk){sallary=kk;}

    // Getters-
    public String getName(){return name;}
    public int getEmpid(){return empid;}
    public float getSallary(){return sallary;}
}

// 5.  Define a class Contact with fields id, firstName, mobileNo and emailId.
//     Provide setters and getters.
class Contact{
    private int id;
    private String mobileNo,firstName,emailId;
    public void setValue(int id,String fname,String mob,String e){this.id=id;firstName=fname;mobileNo=mob;emailId=e;}
    public void show(){System.out.println(" Id: "+id);System.out.println(" FirstName: "+firstName);System.out.println(" MobileNo: "+mobileNo);System.out.println(" EmailId: "+emailId);}
    // Setters-
    public void setId(int i){id=i;}
    public void setMobileNo(String n){mobileNo=n;}
    public void setFirstName(String fn){firstName=fn;}
    public void setEmailId(String e){emailId=e;}

    // Getters-
    public int getId(){return id;}
    public String getMobileNo(){return mobileNo;}
    public String getFirstName(){return firstName;}
    public String getEmailId(){return emailId;}
}

// 6.  Define a class Question with fields queNo, que, optionA, optionB, optionC, optionD, answer.
//     Provide methods to set question and display question.
class Question {
    private int queNo;
    private String que;
    private String optionA;
    private String optionB;
    private String optionC;
    private String optionD;
    private String answer;

    public Question() {
        queNo = 0;
        que = "";
        optionA = "";
        optionB = "";
        optionC = "";
        optionD = "";
        answer = "";
    }

    public void setQuestion(int queNo, String que, String optionA, String optionB, String optionC, String optionD, String answer) {
        this.queNo = queNo;
        this.que = que;
        this.optionA = optionA;
        this.optionB = optionB;
        this.optionC = optionC;
        this.optionD = optionD;
        this.answer = answer;
    }

    public void displayQuestion() {
        System.out.println("Question No: " + queNo);
        System.out.println("Question: " + que);
        System.out.println("A. " + optionA);
        System.out.println("B. " + optionB);
        System.out.println("C. " + optionC);
        System.out.println("D. " + optionD);
        System.out.println("Answer: " + answer);
    }
}

// 7.  Define a class Course with fields courseId, courseName, duration, fee. Provide setter and getters.
class Course {
    private int courseId;
    private String courseName;
    private int duration;
    private float fee;

    public void setCourse(int courseId, String courseName, int duration, float fee) {
        this.courseId = courseId;
        this.courseName = courseName;
        this.duration = duration;
        this.fee = fee;
    }

    public int getCourseId() { return courseId; }
    public String getCourseName() { return courseName; }
    public int getDuration() { return duration; }
    public float getFee() { return fee; }
}

// 8.  Define a class Distance with fields km, m, cm. Provide methods to set distance and display distance.
//     Also fedine a member function to add two distances.
class Distance {
    private int km;
    private int m;
    private int cm;

    public void setDistance(int km, int m, int cm) {
        int totalCm = km * 100000 + m * 100 + cm;
        this.km = totalCm / 100000;
        totalCm %= 100000;
        this.m = totalCm / 100;
        this.cm = totalCm % 100;
    }

    public void displayDistance() {
        System.out.println(" Km: " + km);
        System.out.println(" M: " + m);
        System.out.println(" Cm: " + cm);
    }

    public Distance addDistance(Distance other) {
        Distance result = new Distance();
        result.setDistance(km + other.km, m + other.m, cm + other.cm);
        return result;
    }
}

// 9.  Define a class Circle with radius as member variable. Provide methods to set radius value,
//     calculate area and calculated circumference.
class Circle {
    private float radius;

    public void setRadius(float radius) {
        this.radius = radius;
    }

    public float getRadius() {
        return radius;
    }

    public double calculateArea() {
        return Math.PI * radius * radius;
    }

    public double calculateCircumference() {
        return 2 * Math.PI * radius;
    }
}

// 10. Define a class Book with member variables bookId, title, price and author. Provide setters and getters.
class Book {
    private int bookId;
    private String title;
    private float price;
    private String author;

    public void setBook(int bookId, String title, float price, String author) {
        this.bookId = bookId;
        this.title = title;
        this.price = price;
        this.author = author;
    }

    public int getBookId() { return bookId; }
    public String getTitle() { return title; }
    public float getPrice() { return price; }
    public String getAuthor() { return author; }
}
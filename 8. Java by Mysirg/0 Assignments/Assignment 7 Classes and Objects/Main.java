public class Main {
    public static void main(String[] args) {
        
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
    public static void main(String[] args) {
        Complex a1 = new Complex(2,9);
        a1.setValue(3,4);
        a1.show();
    }
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
    public static void main(String[] args) {
        Time t1 = new Time();
        t1.setTime(12, 61, 25);
        t1.show();
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
    public static void main(String[] args) {
        Cuboid c1 = new Cuboid();
        c1.setValue(12,13,14);
        c1.show();;
    }
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

    public static void main(String[] args) {
        Employ e1=new Employ();
        e1.setValue("Anand",97,100000f);
        e1.show();
    }
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
    
    
    public static void main(String[] args) {
        Contact c1 = new Contact();
        c1.setValue(97,"COOL","8271271774","tbikash.rajoun2@gmail.com");
        c1.show();
    }
}
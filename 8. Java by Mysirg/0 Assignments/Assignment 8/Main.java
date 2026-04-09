public class Main{
    public static void main(String[] args) {
        //1
        Account a1 = new Account();
        a1.setAccountNumber("123456789");
        a1.setCustomerName("John Doe");
        a1.setBalance(10000.0);
        a1.setRateOfInterest(5.0);
        int time = 2; // time in years
        double interest = a1.calculateSimpleInterest(time);
        System.out.println("Account Number: " + a1.getAccountNumber());
        System.out.println("Balance: " + a1.getBalance());
        System.out.println("Customer Name: " + a1.getCustomerName());
        System.out.println("Simple Interest: " + interest);

        //2
        SuperCar car = SuperCar.getInstance();
        car.setOwnerName("Elon Musk");
        System.out.println("Owner Name: " + car.getOwnerName());

        //3
        Video video = new Video();
        video.setVideoId("1");
        video.setTitle("Java Programming");
        video.setViews(1000);
        video.setLikes(500);
        System.out.println("Video ID: " + video.getVideoId());
        System.out.println("Title: " + video.getTitle());
        System.out.println("Views: " + video.getViews());
        System.out.println("Likes: " + video.getLikes());

        //4
        Batch batch1 = new Batch();
        batch1.setBatchCode("B001");
        batch1.setCourseName("Java Programming");
        batch1.setStartDate("05-04-2026");
        batch1.setStudentCount(25);
        batch1.setTime("6:00 PM");
        batch1.setDays("Mon-Wed-Fri");
        System.out.println("Batch Code: " + batch1.getBatchCode());
        System.out.println("Course Name: " + batch1.getCourseName());
        System.out.println("Start Date: " + batch1.getStartDate());
        System.out.println("Student Count: " + batch1.getStudentCount());
        System.out.println("Time: " + batch1.getTime());
        System.out.println("Days: " + batch1.getDays());
        System.out.println("Total Batches: " + Batch.getTotalBatches());

        //5
        Box box1 = new Box();
        box1.setDimension(10, 20, 30);
        box1.showDimension();
        box1.displayBoxCount();

    }
}

// 1.  Define a class Account to represent a bank account. Create accountNumber,
//     customerName, balance as instance members and rateOfInterest as static variable.
//     Provide member functions for the following operations
//     A. Set account number
//     B. Set customer name
//     C. Set balance
//     D. Set rate of interest
//     E. Calculate simple interest (take time as an argument)
//     F. Get account number
//     G. Get balance
//     H. Get customer name
class Account{
    private String accountNumber,customerName;
    private double balance;
    static public double rateOfInterest;
    public void setAccountNumber(String num){
        accountNumber = num;
    }
    public void setCustomerName(String name){
        customerName = name;
    }
    public void setBalance(double bal){
        balance = bal;
    }
    public void setRateOfInterest(double rate){
        rateOfInterest = rate;
    }
    public double calculateSimpleInterest(int time){
        return (balance*rateOfInterest*time)/100;
    }
    public String getAccountNumber(){
        return accountNumber;
    }
    public double getBalance(){
        return balance;
    }
    public String getCustomerName(){
        return customerName;
    }
}

// 2.  Define a class SuperCar to represent a super car of the most powerful and richest
//     person of the world. The car is specially designed and guaranteed to the only
//     available super car of its king in the world. Make sure only one isntance can be
//     created of the SuperCar. Create instance variabes like ownerName, price, colour,
//     brand. Provide appropriate setters and getters.
class SuperCar{
    private String ownerName,colour,brand;
    private double price;
    private static String countInstance;
    private SuperCar(){
        // private constructor to prevent instantiation
    }
    public static SuperCar getInstance(){
        if(countInstance == null){
            countInstance = "1";
            return new SuperCar();
        }
        return null;
    }
    public void setOwnerName(String name){ownerName = name;}
    public void setColour(String col){colour = col;}
    public void setBrand(String br){brand = br;}
    public void setPrice(double pr){price = pr;}
    public String getOwnerName(){return ownerName;}
    public String getColour(){return colour;}
    public String getBrand(){return brand;}
    public double getPrice(){return price;}
}

// 3.  Define a class Video to represent a video entity for a popular app like Youtube.
//     Create member variables like videoId, title. views, likes and totalVideos. Provide
//     methods to set and get properties of video.
class Video{
    private String videoId,title;
    private int views,likes;
    private static int totalVideos;
    public Video(){
        totalVideos++;
    }
    public void setVideoId(String id){videoId = id;}
    public void setTitle(String t){title = t;}
    public void setViews(int v){views = v;}
    public void setLikes(int l){likes = l;}
    public String getVideoId(){return videoId;}
    public String getTitle(){return title;}
    public int getViews(){return views;}
    public int getLikes(){return likes;}
    public static int getTotalVideos(){return totalVideos;}
}

// 4.  Define a class Batch for an educational institute with properties batch code, course
//     name, start date, student count, time, days and total number of batches. Provide
//     appropriate methods to access properties.
class Batch {
    private String batchCode;
    private String courseName;
    private String startDate;
    private int studentCount;
    private String time;
    private String days;
    private static int totalBatches;

    public Batch() {
        totalBatches++;
    }

    public void setBatchCode(String batchCode) { this.batchCode = batchCode; }
    public void setCourseName(String courseName) { this.courseName = courseName; }
    public void setStartDate(String startDate) { this.startDate = startDate; }
    public void setStudentCount(int studentCount) { this.studentCount = studentCount; }
    public void setTime(String time) { this.time = time; }
    public void setDays(String days) { this.days = days; }

    public String getBatchCode() { return batchCode; }
    public String getCourseName() { return courseName; }
    public String getStartDate() { return startDate; }
    public int getStudentCount() { return studentCount; }
    public String getTime() { return time; }
    public String getDays() { return days; }
    public static int getTotalBatches() { return totalBatches; }
}

// 5.  Define a class Box with length, breadth, height and box count as properties. Provide
//     methods to set dimensions and show dimensions. ALso define a method to diplay
//     box count.
class Box {
    private int length;
    private int breadth;
    private int height;
    private static int boxCount;

    public Box() {
        boxCount++;
    }

    public void setDimension(int length, int breadth, int height) {
        this.length = length;
        this.breadth = breadth;
        this.height = height;
    }

    public void showDimension() {
        System.out.println("Length: " + length);
        System.out.println("Breadth: " + breadth);
        System.out.println("Height: " + height);
    }

    public void displayBoxCount() {
        System.out.println("Box Count: " + boxCount);
    }
}

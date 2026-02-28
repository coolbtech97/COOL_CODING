// In Bhopal, there is a special train with peculiar fare system.
// Ticket price is Rs 10 for male with age about 50
//                 Rs 20 for rest of the make passengers
// Ticket price is rs 50 for female with age below 30 yrs
// and for rest of the females ticket price is Rs 40.

// Write a Java program to display ticket price for a passenger.

public class bhopal{
    public static void main(String [] args){
        int age=30;
        char gender='f';
        if(gender=='m')
            System.out.println(age>50?"Ticket Price is 10 RS":"Ticket Price is 20 RS");
        else
            System.out.println(age<30?"Ticket Price is 50 RS":"Ticket Price is 40 RS");
    }
}
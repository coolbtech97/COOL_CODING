import java.time.LocalDate;
import java.time.LocalTime;
import java.util.Random;

import java.time.format.DateTimeFormatter;// print date with Format

public class Main{
    public static void main(String[] args){
        System.out.println("Assignment 11 demo:\n");

        // 1. Current date
        LocalDate currentDate = LocalDate.now();
        System.out.println(currentDate);

        DateTimeFormatter f = DateTimeFormatter.ofPattern("dd/MM/yy");// Note: mm is minutes
        System.out.println(f.format(currentDate));


        // 2. Current time
        LocalTime currentTime = LocalTime.now().withNano(0);
        System.out.println(currentTime);

        DateTimeFormatter k = DateTimeFormatter.ofPattern("hh mm ss");
        System.out.println(k.format(currentTime));


        // 3. Random number between 100 and 200 (inclusive)
        Random r = new Random();
        int n = r.nextInt(101) + 100;
        System.out.println(n);

        
    }
    // 4. Roots of a quadratic equation ax^2 + bx + c = 0
    public static void calculate(int a,int b,int c){
        double x1,x2;
        x1 = (-b+Math.sqrt(b*b - 4*a*c))/(2*a);
        x2 = (-b-Math.sqrt(b*b - 4*a*c))/(2*a);
    }
}


// 4.  Write a java program to calculate roots of a given quadratic equation.


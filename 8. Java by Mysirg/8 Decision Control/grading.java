// Grading system in an exam is as follows:
//     marks     Grade
//     90-100    A
//     80-89     B
//     70-79     C
//     60-69     D
//     50-59     E
//     below 50  F
// Write a Java Program to calculate the grade for the given marks using if-else ladder.

public class grading {
    public static void main(String[] args) {
        int marks = 85;

        if (marks >= 90)
            System.out.println("Grade: A");
        else if (marks >= 80)
            System.out.println("Grade: B");
        else if (marks >= 70)
            System.out.println("Grade: C");
        else if (marks >= 60)
            System.out.println("Grade: D");
        else if (marks >= 50)
            System.out.println("Grade: E");
        else
            System.out.println("Grade: F");
    }
}
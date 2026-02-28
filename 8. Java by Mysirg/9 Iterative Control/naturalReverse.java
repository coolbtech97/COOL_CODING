// Write a Java program to print first 10 natural numbers in reverse order
public class naturalReverse {
    public static void main(String[] args) {
        int start=10,end=1;
        System.out.println("The Natural numbers from 10 to "+end+" are:");
        while(start>=end){
            System.out.print(start+" ");
            start--;
        }
        System.out.println(); // for new line in the linux based operating system
    }
}
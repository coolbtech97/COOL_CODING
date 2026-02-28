// Write a Java program to print first 10 natural numbers
public class natural {
    public static void main(String[] args) {
        int start=1,end=10;
        System.out.println("The Natural numbers from 1 to "+end+" are:");
        while(start<=end){
            System.out.print(start+" ");
            start++;
        }
        System.out.println(); // for new line in the linux based operating system
    }
}
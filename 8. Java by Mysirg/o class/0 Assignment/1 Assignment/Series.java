// Write a Java program to calculate sum of series up to n terms 1,-3,+5,-7,+9 up to n terms.
import java.util.Scanner;

public class Series{
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int k=1;
        int sum=0;
        for(int i=0;i<n;i++){
            if(i%2==0)
                sum+=k;
            else
                sum-=k;
            k+=2;
        }
        System.out.println(sum);
        sc.close();
    }
}
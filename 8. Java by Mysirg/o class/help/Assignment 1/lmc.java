import java.util.Scanner;

public class lmc{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int a1=a;
        int b = sc.nextInt();
        int b1=b;
        // hcf
        while(b!=0){
            a%=b;
            int temp=a;
            a=b;
            b=temp;
        }
        System.out.println("Hcf is "+a);
        System.out.println("Lcm is "+(a1*b1/a));
    }
}
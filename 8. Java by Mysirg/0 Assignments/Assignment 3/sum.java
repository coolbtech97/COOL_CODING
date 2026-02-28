// 4. write a program to calculate sum of digits of a given number.
public class sum{
    public static void main(String[] args){
        int n=12345;
        int sum=n%10;
        while((n/=10)>0)
            sum+=n%10;
            // n/=10;
        
        System.out.println(sum);
    }
}
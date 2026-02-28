// 10. Write a program to rotate digits of a number towards right by one position.
public class shift{
    public static void main(String[] args){
        int n=1234;
        //need4123
        int r=n%10;
        int num=n/10;
        while(num>0){
            r*=10;
            num/=10;
        }
        num=n;
        n/=10;
        n+=r;
        System.out.println("The old number "+num);
        System.out.println("The new number "+n);
    }
}
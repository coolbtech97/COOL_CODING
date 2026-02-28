// 9. Write a program to reverse a three digit number.
public class reverse{
    public static void main(String[] args){
        int n=123;
        int num=0,r;
        while(n>0){
            num*=10;
            num+=n%10;
            n/=10;
        }
        System.out.println(num);
    }
}
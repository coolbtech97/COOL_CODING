import java.util.Scanner;
public class exc {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers: ");
        int a,b;
        a=sc.nextInt();
        b=sc.nextInt();

        try{
            if(a==0 || b==0)
                throw new Exception("Cannot divisible by 0");
        }
        catch(Exception e){
            System.out.println("Exceptoion Occured: "+e.getMessage());
        }
    }
}
x
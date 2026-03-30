import java.util.Scanner;
public class series{
    public static void main(String []args){
        int steps=1;
        int total=0;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            if(i%2==0)
                total+=steps;
            else
                total-=steps;
            steps+=2;
            System.out.println(total);
        }
    }
}
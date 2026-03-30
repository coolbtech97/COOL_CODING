// package help;

import java.util.Scanner;

public class sec{
    public static void main(String []args){
        int []arr={10,20,30,40,50,60};
        int larg1=Integer.MIN_VALUE;
        int larg2=Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++){
            if(larg1<arr[i])
                larg1=arr[i];
        }
        for(int i=0;i<arr.length;i++){
            if(larg2<arr[i] && arr[i]!=larg1)
                larg2=arr[i];
        }
        System.out.println(larg1+" "+larg2);
    }
}
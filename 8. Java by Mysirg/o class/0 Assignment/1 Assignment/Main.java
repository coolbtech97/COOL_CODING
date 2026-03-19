public class Main {
    public static void main(String[] args) {
        int []arr={10,20,3423,4320,20,34,3,4,443,34,2,26,746,45};
        int larg1=arr[0];
        int larg2=arr[0];
        for(int x : arr){
            if(larg1<x)
                larg1=x;
        }
        for(int x : arr){
            if(larg2<x && x!=larg1)
                larg2=x;
        }
        System.out.println("The 1st largest numnber is "+larg1);
        System.out.println("The 2nd largest numnber is "+larg2);
    }
}

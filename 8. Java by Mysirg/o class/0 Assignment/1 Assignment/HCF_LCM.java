public class HCF_LCM {
    public static void main(String[] args) {

        int a = 12;
        int b = 18;
        int hcf = 1;

        for(int i=a<b?a:b;i>0;i--){
            if(a%i==0 && b%i==0){
                hcf=i;
                break;
            }
        }

        int lcm=(a*b)/hcf;

        System.out.println("HCF = "+hcf);
        System.out.println("LCM = "+lcm);
    }
}
public class HcfLcm {
    public static void main(String[] args) {

        int a = 20;
        int b = 30;

        int x = a;
        int y = b;

        while(y != 0){
            int r = x % y;
            x = y;
            y = r;
        }

        int hcf = x;
        int lcm = (a*b)/hcf;

        System.out.println("HCF = " + hcf);
        System.out.println("LCM = " + lcm);
    }
}
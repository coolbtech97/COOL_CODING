public class Circle_Area{
    private static int radius=5;
    static float area(){
        float d =1.0f;
        d*=radius;
        d*=radius;
        d*=22;
        d/=7;
        return d;
    }
    public static void main(String []args){
        System.out.println("Area of radius = "+radius+" is "+area());
    }
}

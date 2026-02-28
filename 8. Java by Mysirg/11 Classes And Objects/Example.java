class BoX {
    int length,breadth,height;
    void setDimension(int x,int y,int z){
        length=x;
        breadth=y;
        height=z;
    }
    void showDimension(){
        System.out.println("Length="+length);
        System.out.println("Breadth"+breadth);
        System.out.println("Height"+height);
    }
}
public class Example{
    public static void main(String[] args) {
        BoX b1=new BoX();
        b1.setDimension(10,20, 30);
        b1.showDimension();
    }
}
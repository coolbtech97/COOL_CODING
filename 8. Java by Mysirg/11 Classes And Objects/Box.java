public class Box {
    int length,breadth,height;
    void setDimension(int x,int y,int z){
        length=x;
        breadth=y;
        height=z;
    }
    void showDimension(){
        System.out.println("Length="+length);
        System.out.println("Breadth="+breadth);
        System.out.println("Height="+height);
    }
    public static void main(String []args){
        Box b1=new Box();
        b1.setDimension(10,20, 30);
        b1.showDimension();
    }
}

package q5;

public class Main {
    public static void main(String[] args) {
        Box box = new Box();
        box.setLength(4.0);
        box.setBreadth(3.0);
        box.setHeight(2.0);

        System.out.println("Length: " + box.getLength());
        System.out.println("Breadth: " + box.getBreadth());
        System.out.println("Height: " + box.getHeight());
        System.out.println("Volume: " + box.calculateVolume());
        System.out.println("Surface Area: " + box.calculateSurfaceArea());
    }
}

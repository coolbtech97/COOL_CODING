public class Main{
    public static void main(String[] args) {
        Area c = new Circle();
        // c.setRadius(5);
        // System.out.println("Area of Circle with radius "+c.getRadius()+" is " + c.getArea());
    }
}

interface Area {
    double PIE = 3.14;
    // void setRadius(double w);
    // double getRadius();
    double getArea();
}

class Circle implements Area{
    private double radius;

    public void setRadius(double r) {
        radius = r;
    }

    public double getRadius() {
        return radius;
    }
    public double getArea() {
        return 3.14 * radius * radius;
    }
}

//    Reference variable of interface can refer to an object of class
//    implementing that interface.
//
//    Area area = new Circle();
//    a1.setRadius(5);        // Error: cannot find symbol
//    double x = a1.getRadius();    // Error: cannot find symbol
//    double y = a1.getArea();      // OK: getArea() is declared in Area interface
//
//    a1 ia a reference variable of type Area, it can refer to an object of
//    circle but can only those members of circle which belongs to interface Area.
package q5;

class Box {
    private double length;
    private double breadth;
    private double height;
    protected double volume;
    protected double surfaceArea;

    public double getLength() {
        return length;
    }

    public void setLength(double length) {
        this.length = length;
    }

    public double getBreadth() {
        return breadth;
    }

    public void setBreadth(double breadth) {
        this.breadth = breadth;
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public double getVolume() {
        return volume;
    }

    public double getSurfaceArea() {
        return surfaceArea;
    }

    public double calculateVolume() {
        volume = length * breadth * height;
        return volume;
    }

    public double calculateSurfaceArea() {
        surfaceArea = 2 * (length * breadth + breadth * height + height * length);
        return surfaceArea;
    }
}

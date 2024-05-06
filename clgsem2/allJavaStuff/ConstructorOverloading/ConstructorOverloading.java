class GeometricShape {
    double area;
    double volume;

    // Constructor for calculating the area of a circle
    void calculate(double radius) {
        area = Math.PI * radius * radius;
    }

    // Constructor for calculating the area of a rectangle
    void calculate(int length, double width) {
        area = length * width;
    }

    // Constructor for calculating the volume of a sphere
    void calculate(double radius, boolean isSphere) {
        volume = (4.0 / 3.0) * Math.PI * radius * radius * radius;
    }

    // Constructor for calculating the volume of a cuboid
    void calculate(double length, double width, double height) {
        volume = length * width * height;
    }

    void display() {
        if (area != 0) {
            System.out.println("Area: " + area);
        } else {
            System.out.println("Volume: " + volume);
        }
    }

    public static void main(String[] args) {
        GeometricShape circle = new GeometricShape();
        circle.calculate(5.0);
        circle.display(); // Output: Area: 78.53981633974483

        // GeometricShape rectangle = new GeometricShape();
        // rectangle.calculate(4.0, 6.0);
        // rectangle.display(); // Output: Area: 24.0

        // GeometricShape sphere = new GeometricShape();
        // sphere.calculate(3.0, true);
        // sphere.display(); // Output: Volume: 113.09733552923255

        // GeometricShape cuboid = new GeometricShape();
        // cuboid.calculate(2.0, 3.0, 4.0);
        // cuboid.display(); // Output: Volume: 24.0
    }
}
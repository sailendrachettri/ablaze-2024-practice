public class GeometricShape {
    double area;
    double volume;

    // Method for calculating the area of a circle
    void calculate(double radius) {
        area = Math.PI * radius * radius;
    }

    // Method for calculating the area of a rectangle
    void calculate(double length, double width) {
        area = length * width;
    }

    // Method for calculating the volume of a sphere
    void calculate(double radius, boolean isSphere) {
        volume = (4.0 / 3.0) * Math.PI * radius * radius * radius;
    }

    // Method for calculating the volume of a cuboid
    void calculate(double length, double width, double height) {
        volume = length * width * height;
    }

    void displayArea() {
        System.out.println("Area: " + area);
    }
    void displayVol() {
        System.out.println("Volume: " + volume);
        
    }

    public static void main(String[] args) {
        GeometricShape shape = new GeometricShape();

        shape.calculate(5.0); // Calling method to calculate the area of a circle
        shape.displayArea(); // Output: Area: 78.53981633974483

        shape.calculate(4.0, 6.0); // Calling method to calculate the area of a rectangle
        shape.displayArea(); // Output: Area: 24.0

        shape.calculate(3.0, true); // Calling method to calculate the volume of a sphere
        shape.displayVol(); // Output: Volume: 113.09733552923255

        shape.calculate(2.0, 3.0, 4.0); // Calling method to calculate the volume of a cuboid
        shape.displayVol(); // Output: Volume: 24.0
    }
}

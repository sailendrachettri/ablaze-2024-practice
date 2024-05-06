
public class EvenOdd {
    static int marks = 70;

    public static void main(String[] args) {
        System.out.println();
        System.out.println();

        for (int i = 0; i <= 100; i++) {
            if (marks >= 90 && marks <= 100) {
                System.out.println("Gread O+");
                // break;

            } else if (marks >= 80 && marks < 90) {
                System.out.println("Gread A");
                // break;

            } else if (marks >= 70 && marks < 80) {
                System.out.println("Gread B");
                // break;

            } else if (marks >= 60 && marks < 70) {
                System.out.println("Gread C");
                // break;

            } else if (marks >= 50 && marks < 60) {
                System.out.println("Gread D");
                // break;

            } else if (marks >= 40 && marks < 50) {
                System.out.println("Gread E");
                // break;

            } else {
                System.out.println("Failed");
            }
        }

        System.out.println();
        System.out.println();
    }
}

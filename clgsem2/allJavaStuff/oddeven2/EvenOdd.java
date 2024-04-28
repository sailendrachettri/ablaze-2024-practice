
public class EvenOdd {
    static int marks = 31;

    public static void main(String[] args) {
        System.out.println();
        System.out.println();

        marks = marks / 10;

        switch (marks) {
            case 1:
            case 2:
            case 3:
                System.out.println("Failed");
                // break;
            case 4:
                System.out.println("Gread E");
                // break;
            case 5:
                System.out.println("Gread D");
                // break;
            case 6:
                System.out.println("Gread C");
                // break;
            case 7:
                System.out.println("Gread B");
                // break;
            case 8:
                System.out.println("Gread A");
                // break;
            case 9:
                System.out.println("Gread O+");
                // break;
            case 10:
                System.out.println("Gread O+");
                // break;

            default:
                System.out.println("Invalid");
                // break;
        }

        System.out.println();
        System.out.println();
    }
}

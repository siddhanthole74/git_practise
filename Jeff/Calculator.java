import java.util.Scanner;
public class Calculator {
    public static void main(String[] args) {
        
        System.out.println("Choose one of the following operations.");
        System.out.println("Type 1: For addition");
        System.out.println("Type 2: For substraction");
        System.out.println("Type 3: For multiplication");
        System.out.println("Type 4: For division");
        System.out.println("Type 5: For remainder");
        System.out.println("Type -1: To exit");
        System.out.println();

        Scanner sc2 = new Scanner (System.in);
        byte option = sc2.nextByte();

        while (option != -1){
            Scanner sc = new Scanner (System.in);
            System.out.println("Enter 2 numbers: ");
            double a = sc.nextDouble();
            double b = sc.nextDouble();
            switch(option){
                case 1:
                System.out.println("Addition : " + (a+b));
                break;

                case 2:
                System.out.println("Substraction : " + (a-b));
                break;

                case 3:
                System.out.println("Multiplication : " + (a*b));
                break;

                case 4:
                System.out.println("Division : " + (a/b));
                break;

                case 5:
                System.out.println("Remainder : " + (a%b));
                break;

                default:
                System.out.println("please choose a valid operation");
                break;
            }
            System.out.println();
            Scanner sc3 = new Scanner (System.in);
            System.out.println("Choose 1 to continue, -1 to exit");
            option = sc3.nextByte();
        }
    }
}

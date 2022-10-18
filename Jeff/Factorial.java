import java.util.Scanner;
public class Factorial {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number whose factorial is to be found : ");
        long x = sc.nextInt();
        long result = 1;
        for (int i = 1; i<= x; i++){
            result*=i;
        }
        System.out.println("The factorial of the given number is : " + result);
    }
}
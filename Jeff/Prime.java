import java.util.Scanner;
public class Prime{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.print("Enter the number : ");
        int x = sc.nextInt();
        boolean flag = true;
        if (x<0){
            System.out.println("Enter a positive number");
        }
        else if (x == 1){
            System.out.println("1 is neither prime nor composite");
        }
        else{
            for (int i = 2; i<x; i++){
                if (x%i==0){
                    System.out.println("Not a prime number");
                    flag = false;
                    break;
                }
            }
            if (flag == true){
                System.out.println("It is a prime number");
            }
        }
    }
}
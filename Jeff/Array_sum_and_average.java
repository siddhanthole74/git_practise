import java.util.Scanner;
public class Array_sum_and_average{
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.print("Enter the number of elements : ");
        byte num = sc.nextByte();
        byte n = num;
        double sum = 0;
        while (num!=0){
            Scanner sc2 = new Scanner (System.in);
            System.out.print("Enter the element : ");
            double number = sc2.nextDouble();
            sum+=number;
            num--;
        }
        System.out.println("The sum is : " + sum);
        System.out.println("The average is : " + (sum/n));
    }
}
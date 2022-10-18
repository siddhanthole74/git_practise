import java.util.Scanner;
public class First_n_primes{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number : ");
        short x = sc.nextShort();
        boolean flag = true;
        System.out.print("The primes upto the given number are : ");
        for (int i = 2; i<=x; i++){
            for (int j = 2; j<i; j++){
                if (i%j==0){
                    flag = false;
                    break;
                }
            }
            if (flag == true){
                System.out.print(i + " ");    
            }
            flag = true;
        }
    }
}
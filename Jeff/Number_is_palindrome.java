import java.util.Scanner;
public class Number_is_palindrome{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number : ");
        String num = sc.nextLine();
        int i = 0;
        int j = num.length()-1;
        boolean flag = true;
        while (i<j){
            if (num.charAt(i)!=num.charAt(j)){
                flag = false;
                break;
            }
            i++;
            j--;
        }
        if (flag == true){
            System.out.println("Number is a palindrome");
        }
        else{
            System.out.println("Number is NOT a palindrome");
        }
    }
}
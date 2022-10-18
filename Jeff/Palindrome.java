import java.util.*;
class Palindrome{
    public static void main(String args[]){
        int r,sum =0,temp;
        int a;
        System.out.println("Enter the  no:");
        Scanner obj = new Scanner(System.in);
        a = obj.nextInt();

        temp  = a;

        while(a>0)
        {
            r = a % 10;
            sum = (sum*10)+ r;
            a = a / 10; 
        }
        if (temp == sum) {
            System.out.println("Its an Palindrome no:");
        }
        else
        {
            System.out.println("Its not an Palindrome no:");
        }
    }

}
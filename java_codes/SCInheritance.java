import java.util.Scanner;

class Account
{
    private String accNo;
    private String name;
    private String address;
    private String phno;
    private String dob;
    protected long balance;

    // getter methods
    public String getAccNo()
    {
        return accNo;
    }
    public String getName()
    {
        return name;
    }
    public String getAddress()
    {
        return address;
    }
    public String getPhno()
    {
        return phno;
    }
    public long getBalance()
    {
        return balance;
    }
    public String getDOB()
    {
        return dob;
    }
    // setter method 
    public void setAccountNo(String accNo)
    {
        this.accNo=accNo;
    }
    public void setName(String name)
    {
        this.name=name;
    }
    public void setAddress(String add)
    {
        address=add;
    }
    public void setPhno(String phno)
    {
        this.phno=phno;
    }
    public void setDateOfBirth(String dob)
    {
        this.dob=dob;
    }
    public void setBalance(long balance)
    {
        this.balance=balance;
    }
    


}
class SavingAccount extends Account
{
    public void deposit(long amt)
    {
        balance+=amt;
    }

    public void withdraw(long amt)
    {
        if(amt<=balance)
        {
            balance-=amt;
        }
        else
        {
            System.out.println("Insufficient balance");
        }
    }


}

class SCInheritance {
    public static void main(String args[])
    {
        Account ac=new Account();
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the bank account holder name : ");
        String name=sc.nextLine();
        ac.setName(name);
        
        System.out.println("Enter Account No : ");
        String accountno=sc.nextLine();
        ac.setAccountNo(accountno);

        System.out.println("Enter the Address : ");
        String address=sc.nextLine();
        ac.setAddress(address);

        System.out.println("Account Holder name : "+ac.getName());
        System.out.println("Account Number : "+ac.getAccNo());
        System.out.println("Address of User is : "+ac.getAddress());
        sc.close();



    }
}


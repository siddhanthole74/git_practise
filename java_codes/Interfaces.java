/**
 * @file Interfaces.java
 * @author Siddhant Hole (you@domain.com)
 * @brief Interfaces in java
 * @version 0.1
 * @date 2023-09-28
 * @copyright Copyright (c) 2023
 * Interfaces In java
 */
interface Test
{
    void meth1();// this methods and class are by default abstract
    void meth2();
}
class My implements Test
{
    public void meth1()
    {
        System.out.println("My class method 1");
    }
    public void meth2()
    {
        System.out.println("My class method 2");
    }
}

class Interfaces {
    public static void main(String args[])
    {
        //Test t=new Test();// you cannot initiate the object of the Interface class
          //Test t1;// you can make reference of the 
          Test t2=new My();
          t2.meth1();
          t2.meth2();

    }
}

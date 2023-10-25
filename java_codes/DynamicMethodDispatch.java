/**
 * @file CommentSnippit.cpp
 * @author your name (you@domain.com)
 * @brief Dynamic method dispatch 
 * @version 0.1
 * @date 2023-09-16
 * @copyright Copyright (c) 2023
 * Dynamic method dispatch is used for achieve runtime polymorphism using method overriding 
 * A super class reference can hold the object of the subclass
 * But it can call only those method that are defined in super class
 * A super class method holding the object of the subclass and calling the overided method this is basically runtime polymorphism
 */
class Super
{
    void Meth1()
    {
        System.out.println("Super method 1");
    }
    void Meth2()
    {
        System.out.println("Super method 2");
    }
}
class Sub extends Super
{
    @Override
    void Meth2()
    {
        System.out.println("Sub Method 2");
    }
    void Meth3()
    {
        System.out.println("Sub Method 3");
    }
}
class DynamicMethodDispatch {
    public static void main(String args[])
    {
        Super r=new Sub();
        r.Meth1();
        r.Meth2();// the will have only knowledge of Meth1 and Meth2 and it will the overriden method form Subclass 
        //r.Meth3(); this will not be called since reference have only knowledge about the Type Super
        // methods are called depending on the object not on the reference. 
    }
}

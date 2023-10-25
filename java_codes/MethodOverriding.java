/**
 * @file CommentSnippit.cpp
 * @author your name (you@domain.com)
 * @brief method overriding 
 * @version 0.1
 * @date 2023-09-16
 * 
 * @copyright Copyright (c) 2023
 * dymamic method dispatch is important concept in method overrding 
 * see the below example
 * note : when we not mention any access modifier to any data member then by default it is private and accessible only same package in this case in same java file\
 * we cannot override static method we cannot override the final method
 * understand the difference between method overloading and method overriding in java
 */

class Super
{
    void display()
    {
        System.out.println("Super class display method ");
    }
}
class Child extends Super
{
    @Override // Override is just annotation used in overriding functions
    void display()
    {
        System.out.println("Child class display method ");
    }
}
class MethodOverriding {
    public static void main(String args[])
    {
        Super s1=new Super();
        s1.display();
        Child c1=new Child();
        c1.display();
        Super s2=new Child();// this is dynamic method dispatch that means even if parent class method is reference for child class the child class method are going to called.
        s2.display();
    }
}

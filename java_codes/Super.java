

/**
 * @file CommentSnippit.cpp
 * @author Siddhant Hole (you@domain.com)
 * @brief  Super 
 * @version 0.1
 * @date 2023-09-16
 * super is also reference to the super class.
 * understand the use of the super keyword with the help of example 
 * @copyright Copyright (c) 2023
 * 
 */
class Rectangle
{
    int length;
    int breadth;
    int x=10;

    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;

    }
}
class Cuboid extends Rectangle
{
    int height;
    int x=20;

    Cuboid(int l,int b,int h)
    {
        super(l,b);// this calling parent class constructor 
        height=h;
    }
    void display()
    {
        System.out.println("VAlue get from super class : "+super.x);
        System.out.println("Value get from Current class : "+x);
    }
}
class Super
{
    public static void main(String args[])
    {
        Cuboid c1=new Cuboid(13, 20, 15);
        System.out.println("Length of the Cuboid is :"+c1.length);
        System.out.println("Breadth of the cuboid is : "+c1.breadth);
        System.out.println("Height of the cuboid is : "+c1.height);
       // Rectangle r1=new Rectangle(15, 0);
        
        c1.display();

    }
}
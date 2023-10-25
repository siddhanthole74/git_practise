/**
 * @file CommentSnippit.cpp
 * @author your name (you@domain.com)
 * @brief Generaliztion vs Specialization
 * Generalization means bottom-up that means suggesting common name for group of things
 * Secialization means top-down that means Integrating the existing thing making better version of existing thing
 * In java Specialization achieve using Inheritance. 
 * In java Generalization achieved using Interface.
 * @version 0.1
 * @date 2023-09-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
// Example of inheritance 
class Circle
{
    // data member
    public int radius;

    public double Area()
    {
        return Math.PI*radius*radius;
    }

}

class Cylinder extends Circle
{
    public int height;

    public double Volume()
    {
        return Area()*height;
    }
}
class Inheritance
{
    public static void main(String args[])
    {
        Cylinder c=new Cylinder();
        c.radius=10;
        c.height=10;
        System.out.println("Volume of the Cylinder is : "+c.Volume());
    }
}
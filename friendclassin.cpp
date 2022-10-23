#include<iostream>
using namespace std;

class triangle
{
        float bs ,ht;

    friend class shape;
    public:

    void triinfo(){
        cout<<"Enter Base , Height :\n";
        cin>>bs>>ht;


    } 

};
class rect
{
        float l,br;

    friend class shape;
    public:

    void rectinfo(){
        cout<<"Enter Lenght , Breadth:\n";
        cin>>l>>br;

    }
};
class circle
{
        float ra;

    friend class shape;
    public:

    void circleinfo(){
        cout<<"Enter Radius of circle:\n";
        cin>>ra;

    }
};

class shape
{
    float art , arr ,arc ;
    public:

    void calar(triangle t , rect r , circle c){
        art = t.bs*t.ht*0.5;
        arr = r.l*r.br;
        arc = 3.14*c.ra*c.ra;

        cout<<"\nArea of triangle is:\n"<<art;
        cout<<"\nArea of rectangle:<<\n"<<arr;
        cout<<"\nArea of circle is:<<\n"<<arc;


    }
};
main(){
    triangle t; rect r; circle c;
    shape s;
    t.triinfo();
    r.rectinfo();
    c.circleinfo();
    s.calar(t,r,c);
   return 0;
}

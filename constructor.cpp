#include<iostream>
using namespace std;

class rect{
    int l,br,ar,pr;

    public:
    rect(){
        cout<<"Lenght , Breadth :";
        cin>>l>>br;

    }
    ~rect(){
        ar = l*br;
        pr = 2 * (l+br);
        cout<<l<<"\t"<<br<<"\tArea:"<<ar<<"\tperimeter:"<<pr<<endl;

    }
} ;
int main()
{
    rect rt;
}
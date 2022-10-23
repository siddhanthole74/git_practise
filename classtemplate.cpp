#include<iostream>
using namespace std;

template <class T>
class add{
    T a,b,c;
    public:
    void dosum();

};

template <class T>
void add <T> :: dosum(){
    cout<<"\nEnter A ,B:";
    cin>>a>>b;
    c=a+b;

    cout<<"\nAns="<<c;
}

main(){
    add <int> m;
    add <float> p;

    cout<<"\nIntegar\n";
    m.dosum();
    cout<<"\nFloat\n";
    p.dosum();

}
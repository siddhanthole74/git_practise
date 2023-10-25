#include<bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll          long long int
#define nl          "\n"
#define pb          push_back
#define mk          make_pair
#define fe          first
#define se          second
#define all(v)      v.begin(),v.end()
#define testcases   ll t;cin>>t;while(t--)
#define var(n)      ll n;cin>>n;
using namespace std;
/*
   Polymorphism 

   poly means many forms 

   Polymorphism has two types : 1. Compile time Polymorphism  2. Runtime Polymorphism

   Compile time polymorphism further divided into 1. Function overloading 2. Function overriding

   Runtime polymorphism achived wth help of virtual functions 

   1. function overloading : function with same name but different number or different type of arguments is called function overloading.

   2. Operator overloading  : is the feature that allows you to redefine the behaviour of operators for user-defined classes or types .

      code is given below for better understanding.

   3. Virtual function : Virtual functions are the member functions which are derived into the base class that can be overrriden by derived class.
      
      It enable dynamic binding or late binding , which means that appropriate function implementation is determined at based on actual type of object being reffered to ,

      rather than the type of the pointer.

 */

// operator overloading 

class Complex
{
    private :
    int real;
    int imag;

    public:
    // parameterized constructor 
    Complex(int r=0 , int i=0)
    {
        real=r;
        imag=i;
    }

    // operator overloading

    Complex operator + (Complex &obj)
    {
        Complex res;

        res.real= real+obj.real;
        res.imag=imag+obj.imag;

        return res;
    }
    // display function to display the result of addition of complex number 

    void display()
    {
        cout<<real<<" + "<<imag<<" i"<<nl;
    }

};

int main()
{
    Complex c1(4,5), c2(7,6);

    Complex c3=c1+c2;

    c3.display();
}
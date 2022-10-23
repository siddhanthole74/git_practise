#include <bits/stdc++.h>
using namespace std;
void printnames5times(int p,int n) // program to print name 5 times
{
    if(p>n) return;
    cout<<"Sumit"<<endl;
    printnames5times(p+1,n);  
}
void print_1_to_n(int p,int n) // program to print numbers from 1 to n.
{
    if(p>n) return;
    cout<<p<<endl;
    print_1_to_n(p+1,n);
}
void print_n_to_1(int p) // program to print numbers from n to 1;
{
    if(p<1) return;
    cout<<p<<endl;
    print_n_to_1(p-1);
}
void print_1_to_n_BY_Backtracking(int p) // even if started with last value it prints values from start value.
{                                        // this happens when function is called before function contain 
    if(p<1) {return;}
    print_1_to_n_BY_Backtracking(p-1); // function is called first
    cout<<p<<endl;                     // print statement after function call
}

void print_n_to_1_BY_Backtracking(int p,int n)
{
    if(p>n) return;
    print_n_to_1_BY_Backtracking(p+1,n);
    cout<<p<<endl;
}
int main()
{
    printnames5times(1,5);
    print_1_to_n(1,10);
    print_n_to_1(10);
    print_1_to_n_BY_Backtracking(10);
    print_n_to_1_BY_Backtracking(1,10);
    return 0; 
}








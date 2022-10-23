#include <bits/stdc++.h>
using namespace std;
void fibonacci_series(int p,int q,int n) // funtion to print fibbonaci series.
{
    if(p>n) return;
    cout<<p<<" ";
    fibonacci_series(q,p+q,n);
}
int fibo(int n)   // Funtion to find Nth  number in fibbonaci series.
{                 // see the recursion tree for this recursion.
    if(n==0) return 0;     // complexity of this program is about 2^n i.e. exponetial in nature.
    if(n==1) return 1;
    int last= fibo(n-1);
    int first= fibo(n-2);
    return first+last;
}
int main()
{
    fibonacci_series(0,1,100);
    cout<<endl;
    cout<<fibo(6)<<endl;
    return 0; 
}
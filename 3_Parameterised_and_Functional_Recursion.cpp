#include <bits/stdc++.h>
using namespace std;
// int sum(int n,int su)
// {
//     if(n<1) return su;
//     su=sum(n-1,su)+n;
// }
int s(int n,int suu)  // parametirised Recursive method 
{
    if(n<1) return suu;
    s(n-1,suu+n);
}
int suuum(int n)     // functional Recursive method
{
    if(n==0) return 0;
    return n+suuum(n-1);
}
long long fact(int n)  // functional recursive method
{
    if(n==0) return 1;
    return n*fact(n-1);
}
int main()
{
    cout<<s(4,0)<<endl;
    cout<<suuum(4)<<endl;
    cout<<fact(4)<<endl;
    return 0; 
}
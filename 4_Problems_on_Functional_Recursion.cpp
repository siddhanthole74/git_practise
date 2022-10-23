#include <bits/stdc++.h>
using namespace std;
void revpara(int i,int arr1[],int size) 
{
    if(i>size/2) return;
    swap(arr1[i],arr1[size-i-1]);
    revpara(i+1,arr1,10);
}

bool palin(int i,string s)   // functional recusion.
{
    if(i>s.size()/2) return true;   // if string is palindrom then n/2 functions will call
    if(s[i]!=s[s.size()-i-1]) return false; // ifthis condition met then recursion stops and from there it will start returning false;
    return palin(i+1,s); 
}
int main()
{
    int arr1[]={1,2,3,4,5,6,7,8,9,10};
    revpara(0,arr1,10);
    for(int i=0;i<10;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    string s="AbBChCBbA";
    cout<<"Flag = "<<palin(0,s)<<endl;
    return 0; 
}
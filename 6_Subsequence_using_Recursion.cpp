
// this program is about printing subsequenses of an given array
#include <bits/stdc++.h>
using namespace std;
void print_subsequence(int i,int a[],vector<int> arr, int n)
{
    if(i>=n) 
    {
        for(auto val : arr) cout<<val<<" ";
        cout<<endl;
        return;
    }
    arr.push_back(a[i]);
    print_subsequence(i+1,a,arr,n);
    arr.pop_back();
    print_subsequence(i+1,a,arr,n);
}

int main()
{
    int a[]={1,2,3};
    vector<int> arr;
    print_subsequence(0,a,arr,3);
    return 0; 
}
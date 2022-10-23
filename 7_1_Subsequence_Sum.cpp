
// This program is about printing subsequenses of arr having sum k;
#include <bits/stdc++.h>
using namespace std;
void rec(int i,int a[], vector <int> arr,int n,int sum,int k)
{
    if(i>=n)
    {
        if(sum==k)
        {
            for(auto val:arr) cout<<val<<" ";
            cout<<endl;
        }
        return;
    }
    arr.push_back(a[i]);
    sum=sum+a[i];
    rec(i+1,a,arr,n,sum,k);
    arr.pop_back();
    sum=sum-a[i];
    rec(i+1,a,arr,n,sum,k);
}
//***************************************************************************
//************Function to find only first subsequence having sum k.
// bool rec(int i,int a[], vector <int> arr,int n,int sum,int k)
// {
//     if(i>=n)
//     {
//         if(sum==k)
//         {
//             for(auto val:arr) cout<<val<<" ";
//             cout<<endl;
//             return true;
//         }
//         return false;
//     }
//     arr.push_back(a[i]);
//     sum=sum+a[i];
//     if(rec(i+1,a,arr,n,sum,k)) return true;
//     arr.pop_back();
//     sum=sum-a[i];
//     if(rec(i+1,a,arr,n,sum,k)) return true;
//     return false;
// }
//************************************************************************************
int main()
{
    int a[]={1,2,1};
    vector<int> arr;
    rec(0,a,arr,3,0,2);
    return 0; 
}






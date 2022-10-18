#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int num; cin>>num;
        int arr[num]; 
        for (int i = 0; i < num; i++) 
        {
            cin>>arr[i];
        }
        
        for(int i = 0; i < num-1; i++)
        {
            int g = __gcd(arr[i] , arr[i+1]);
            if(arr[i] > arr[i+1])
                arr[i] = g;
            else
                arr[i+1] = g;
        }
        
       int mn = *min_element(arr , arr+num);
       
        
        cout<<mn*num<<endl;
    }
	return 0;
}

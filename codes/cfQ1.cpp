//ACCEPTED
//ARRAY REORDERING
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a+n);
        int cnt = 0;
        
        vector<int> v;
        for (int i = n-1; i >= 0; i--)
        {
            if(a[i]%2==0)
                v.push_back(a[i]);
        }
        
        for (int i = n-1; i >= 0; i--)
        {
            if(a[i]%2!=0)
                v.push_back(a[i]);
        }

        for (int i = 0; i < v.size() ; i++)
        {
            for (int j = i+1; j <v.size() ; j++)
            {
                if(__gcd(v[i],2*v[j])>1)
                    cnt++;
            }
            
        }
        
        cout<<cnt<<"\n";
    }

    return 0;
}
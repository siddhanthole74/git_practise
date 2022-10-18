//ACCEPTED
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        
        int a[n];
        for (int i = 0; i < n; i++) 
        {
            cin>>a[i];
        }
        
        map<int,int> m;
        for (int i = 0; i < n; i++) {
            m[a[i]]++;
        }

        vector<int>x;
        for(auto &it : m)
        {
            x.push_back(it.second);   
        }

        sort(x.begin(), x.end());
        int hfreq = x[x.size() - 1];

        if(n%2!=0)
        {
            if((n+1)/2 < hfreq)
                cout<<"NO\n";

            else
                cout<<"YES\n";
        }

        else
        {
            if(n/2 < hfreq)
                cout<<"NO\n";

            else
                cout<<"YES\n";
        }
        
    }
	return 0;
}

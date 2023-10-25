#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        string s;
        cin>>n;
        cin>>s;
        vector<char> v1;


        for(int i=0;i<n-2;i++)
        {
            ll flag=0;
            for(int j=i+1;j<n-1;j++)
            {
                if(s[i]==s[j])
                {
                    if(flag==0)
                    {
                        v1.emplace_back(s[i]);
                        i=j+1;
                        flag=1;
                    }
                    
                }
            }
        }
           for(auto it=v1.begin();it!=v1.end();it++)
           {
                cout<<*it;
           }
            
            cout<<endl;
    }
    return 0;
}
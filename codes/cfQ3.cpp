//ACCEPTED
//EXCITING BETS
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int a, b;
        cin>>a>>b;
        if(a==b)
        {   //infinite excitement
            cout<<0<<" "<<0<<endl;
        }

        else
        {
            long long diff = abs(a-b);
            cout<<diff<<" "<<min(a%diff, abs(diff - a%diff))<<endl;
        }

    }
    
    return 0;
}
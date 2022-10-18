//ACCEPTED
//BAD BOY
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,i,j; //n,m are dimensions of the room and i,j are initial positions of anton
        cin>>n>>m>>i>>j;

        int x1,x2,x3,x4;
        x1 = abs(i-1) + abs(j-1);
        x2 = abs(i-1) + abs(m-j);
        x3 = abs(n-i) + abs(j-1);
        x4 = abs(n-i) + abs(m-j);

        int val = max(x1,max(x2,max(x3,x4)));
        if(val==x1 || val == x3)
            cout<<n<<" "<<m<<" "<<1<<" "<<1<<"\n";

        else
            cout<<1<<" "<<m<<" "<<n<<" "<<1<<"\n";
        
    }
    
    return 0;
}
//ACCEPTED
//COOKIES
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], sum = 0, cnt_odd = 0, cnt_even = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if(a[i]%2 == 0)
            cnt_even++;
        if(a[i]%2!=0)   
            cnt_odd++;
    }

    if(sum%2==0)
        cout<<cnt_even<<endl;

    else
        cout<<cnt_odd<<endl;

    return 0;
}
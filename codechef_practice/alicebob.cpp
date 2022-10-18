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
        int s[n];
        for (int i = 0; i < n; i++)
        {
            cin>>s[i];
        }
        
        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
                cnt++;
        }

        if (cnt % 2 == 0 )
            cout << "Bob\n";

        else
            cout << "Alice\n";
    }
    return 0;
}

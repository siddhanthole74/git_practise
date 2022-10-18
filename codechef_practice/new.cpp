#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main()
{
    // your code goes here
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

        if (n % 2 != 0)
            cout << "NO\n";

        else
        {
            map<int, int> m;
            int f = 1;
            for (int i = 0; i < n; i++)
            {
                m[a[i]]++;
            }

            for (auto &it : m)
            {
                if (it.second > 2)
                {
                    cout << "NO\n";
                    f = 0;
                    break;
                }
            }

            if (f)
                cout << "YES\n";
        }
    }
    return 0;
}
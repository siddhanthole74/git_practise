// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    vector<int> v;
    while (t--)
    {
        int n, d = 0;
        cin >> n;
        int a[n];
        int b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int g = a[n - 1];
        int h = a[0];
        int c = 0;
        for (int i = n; i > 0; i--)
        {
            v.push_back(a[n + i - 1]);
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[n-i-1])
                c++;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] < a[i + 1])
                d++;
        }

        // cout<<"hgdfj"<<c;

        if (c == n)
            cout << 0 << "\n";
        else
        {

            if (d == n)
                cout << g - h << "\n";
            else
                cout << -1 << "\n";
        }
    }
    return 0;
}

/*
3
4
4 2 2 4
5
5 4 3 2 1
4
1 2 3 4
*/
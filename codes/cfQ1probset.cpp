// BURENKA PLAYS WITH FRACTIONS
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a * d == b * c)
            cout << 0 << "\n";

        else if ((a * d == 0) || (b * c == 0))
            cout << 1 << "\n";

        else if (((a * d) % (b * c) == 0) || ((b * c) % (a * d) == 0))
            cout << 1 << "\n";

        else
            cout << 2 << "\n";
    }

    return 0;
}
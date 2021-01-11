#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, x = 0;
        cin >> n;
        if (n == 1)
            cout << 9;
        else if (n == 2)
            cout << 98;
        else
        {
            cout << 989;
            for (int i = 0; i < n - 3; i++)
            {
                if (x == 10)
                    x = 0;
                cout << x;
                x++;
            }
        }
        cout << "\n";
    }
#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
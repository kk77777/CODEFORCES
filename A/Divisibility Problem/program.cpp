#include <bits/stdc++.h>
#define ll long long
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
    int t;
    cin >> t;
    while (t--)
    {

        ll a, b, d, r, ans;
        cin >> a >> b;

        if (a % b == 0)
        {
            ans = 0;
        }

        else if (a > b)
        {
            r = a % b;
            d = a / b;

            ans = (d + 1) * b - a;
        }

        else if (a < b)
        {
            ans = b - a;
        }

        cout << ans << "\n";
    }
#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
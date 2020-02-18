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
    int t;
    cin >> t;
    while (t--)
    {
        ll s;
        cin >> s;
        ll cb = 0, sum = 0, rem = 0;

        while (s >= 10)
        {

            cb = floor(s / 10);
            rem = s % 10;
            sum += (s - rem);
            s = cb + rem;
        }
        cout << s + sum << "\n";
    }
#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}

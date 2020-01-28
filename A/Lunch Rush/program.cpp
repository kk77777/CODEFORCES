#include <bits/stdc++.h>
#define ll long int
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

    ll n, k, ans = -INT_MAX;
    cin >> n >> k;

    for (auto i = 0; i < n; i++)
    {
        int f, t;
        cin >> f >> t;
        int res = f - (t - k);
        if (res > f)
            res = f;
        if (res > ans)
            ans = res;
    }
    cout << ans;

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
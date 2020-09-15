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
    // int tc;
    // cin >> tc;
    // while (tc--)
    // {
    ll n, d, ans = 0;
    cin >> n >> d;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        ll k = upper_bound(v.begin(), v.end(), v[i] + d) - v.begin();
        k = k - i - 1;
        if (k > 1)
        {
            ans += (k * (k - 1)) / 2;
        }
    }
    cout << ans;
    // cout << "\n";
    // }
#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
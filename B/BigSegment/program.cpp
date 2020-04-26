// https://codeforces.com/problemset/problem/242/B
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

    ll n;
    cin >> n;

    vector<pair<ll, ll>> v;
    ll max = 0, min = INT_MAX;

    for (auto i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back({x, y});
        if (min > x)
        {
            min = x;
        }
        if (max < y)
        {
            max = y;
        }
    }
    ll ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i].first == min && v[i].second == max)
        {
            ans = i + 1;
        }
    }
    cout << ans;

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
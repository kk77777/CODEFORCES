// http://codeforces.com/problemset/problem/459/B
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
    ll maxm = 0, minm = INT_MAX, cmax = 0, cmin = 0, eq = 0, prev = -1;
    vector<ll> v;
    ll temp;
    cin >> temp;
    v.push_back(temp);
    maxm = v[0];
    minm = v[0];
    prev = v[0];
    for (auto i = 1; i < n; i++)
    {
        ll x;
        cin >> x;
        if (maxm < x)
        {
            maxm = x;
        }
        else if (minm > x)
        {
            minm = x;
        }
        else if (x == prev)
        {
            eq++;
        }
        v.push_back(x);
    }
    for (auto i = 0; i < n; i++)
    {
        if (v[i] == maxm)
        {
            cmax++;
        }
        else if (v[i] == minm)
        {
            cmin++;
        }
    }
    if (eq == v.size() - 1)
    {
        cout << maxm - minm << " " << n * (n - 1) / 2;
    }
    else
    {
        cout << maxm - minm << " " << cmax * cmin;
    }

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
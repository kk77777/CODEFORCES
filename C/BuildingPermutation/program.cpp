// http://codeforces.com/problemset/problem/285/C
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
    vector<ll> v;

    for (auto i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cnt += (abs(i - v[i] + 1));
    }

    cout << cnt;

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
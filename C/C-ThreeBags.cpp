#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll na, nb, nc;
    cin >> na >> nb >> nc;
    ll mina, minb, minc;
    mina = minb = minc = 2e9;
    ll suma = 0, sumb = 0, sumc = 0;
    vector<ll> a, b, c;
    for (ll i = 0; i < na; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
        suma += x;
        mina = min(x, mina);
    }
    for (ll i = 0; i < nb; i++)
    {
        ll x;
        cin >> x;
        sumb += x;
        b.push_back(x);
        minb = min(x, minb);
    }
    for (ll i = 0; i < nc; i++)
    {
        ll x;
        cin >> x;
        sumc += x;
        c.push_back(x);
        minc = min(x, minc);
    }

    ll res = -3e8;
    res = max(res, suma + sumb - sumc);
    res = max(res, suma - sumb + sumc);
    res = max(res, -suma + sumb + sumc);
    ll ans = -3e8;
    ans = max(ans, suma + sumb + sumc - 2 * (mina + minb));
    ans = max(ans, suma + sumb + sumc - 2 * (minb + minc));
    ans = max(ans, suma + sumb + sumc - 2 * (minc + mina));

    ll finalAns = max(ans, res);
    cout << finalAns;

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
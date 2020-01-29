#include <bits/stdc++.h>
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

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int x = (k * l) / nl;
    int y = c * d;
    int z = p / np;
    int ans = min(min(x, y), z);
    ans = ans / n;
    cout << ans;

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
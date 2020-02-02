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

    int n, a, b, c, sum = 0, ct = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        sum = 0;
        if (a)
            sum++;
        if (b)
            sum++;
        if (c)
            sum++;
        if (sum >= 2)
            ct++;
    }
    cout << ct;

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
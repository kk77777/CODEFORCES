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

    double n, sum = 0;
    cin >> n;
    double ans;
    int p;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        sum += p;
    }
    ans = sum / n;
    cout << fixed << setprecision(12) << ans;

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
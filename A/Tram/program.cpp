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

    int n, prev = 0, a, b, m = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        if (m < (prev - a) + b)
            m = (prev - a) + b;
        prev = (prev - a) + b;
    }
    cout << m;

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
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

    int n;
    cin >> n;
    int c = 0;
    int a[n + 10];
    int r[5050];
    memset(r, -1, sizeof(r));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        r[a[i]] = a[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        if (r[i] == -1)
        {
            c++;
        }
    }

    cout << c;

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
//https://codeforces.com/contest/1324/problem/0
#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, mina = INT_MAX, maxa;
        bool flag = 1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] < mina)
                mina = a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if ((a[i] - mina) % 2 != 0)
            {
                cout << "NO\n";
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
    }
    // #ifndef ONLINE_JUDGE
    //     cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
    // #endif
    return 0;
}
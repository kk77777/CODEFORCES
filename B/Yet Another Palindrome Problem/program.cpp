//https://codeforces.com/contest/1324/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "rt", stdin);
    //     freopen("output.txt", "wt", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool flag = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 2; i++)
        {
            for (int k = n - 1; k >= i + 2; k--)
            {
                // cout << a[i] << " " << a[k] << "\n";
                if (a[k] == a[i])
                {
                    // cout << k << " " << i << "\n";
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    // #ifndef ONLINE_JUDGE
    //     cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
    // #endif
    return 0;
}

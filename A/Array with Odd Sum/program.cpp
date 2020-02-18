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
    int t;
    cin >> t;
    while (t--)
    {
        int n, e = 0, o = 0;
        cin >> n;

        int ar[n + 10];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] % 2 == 0)
            {
                e++;
            }
            else
            {
                o++;
            }
            
        }
        if (n % 2 == 0)
        {
            if (e != 0 && o != 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else if (e % 2 != 0)
        {
            if (n == e)
                cout << "NO\n";
            else
            {
                cout << "YES\n";
            }
        }
        else
        {
            cout << "YES\n";
        }
    }
#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}

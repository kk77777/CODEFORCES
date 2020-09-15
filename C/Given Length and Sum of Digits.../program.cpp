#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(int m, int s)
{
    if (m == 1)
    {
        s <= 9 ? cout << s << " " << s : cout << -1 << " " << -1;
        return 0;
    }

    if (s == 0)
    {
        m == 1 ? cout << 0 << " " << 0 : cout << -1 << " " << -1;
        return 0;
    }
    if (s > 9 * m)
    {
        cout << -1 << " " << -1;
        return 0;
    }
    int rsum = s;
    vector<int> mn(m, 0), mx(m, 0);
    for (int i = 0; i < m && rsum > 0; i++)
    {
        if (rsum >= 9)
        {
            mx[i] = 9;
            rsum -= 9;
        }
        else
        {
            mx[i] = rsum;
            rsum = 0;
        }
    }
    rsum = s - 1;
    for (int i = m - 1; i >= 0; i--)
    {
        if (rsum >= 9)
        {
            mn[i] = 9;
            rsum -= 9;
        }
        else
        {
            mn[i] = rsum;
            rsum = 0;
        }
    }
    mn[0] = (mn[0] == 0 ? 1 : mn[0] + 1);
    for (int i = 0; i < m; i++)
    {
        cout << mn[i];
    }
    cout << " ";
    for (int i = 0; i < m; i++)
    {
        cout << mx[i];
    }
    return 0;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int tc;
    // cin >> tc;
    // while (tc--)
    // {
    int m, s;
    cin >> m >> s;
    solve(m, s);
    // cout << "\n";
    // }
#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
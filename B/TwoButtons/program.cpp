//http://codeforces.com/problemset/problem/520/B
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int cnt = 0;

int solve(int n, int m)
{
    if (n == m)
    {
        return 0;
    }
    if (n > m)
    {
        return n - m;
    }
    else
    {
        while (n < m)
        {
            if (m % 2 == 0)
            {
                m = m / 2;
                cnt++;
            }
            else
            {
                m++;
                cnt++;
            }
        }
        return cnt + (n - m);
    }
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

    int n, m;
    cin >> n >> m;

    cout << solve(n, m);

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
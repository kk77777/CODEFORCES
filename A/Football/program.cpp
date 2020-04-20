//http://codeforces.com/problemset/problem/96/A
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool solve(string s)
{
    int cnt = 1;
    int maxCnt = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
            if (cnt > maxCnt)
            {
                maxCnt = cnt;
            }
        }
        else
            cnt = 1;
    }
    if (maxCnt >= 7)
    {
        return true;
    }
    else
    {
        return false;
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

    string s;
    cin >> s;

    solve(s) ? cout << "YES\n" : cout << "NO\n";

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
//http://codeforces.com/problemset/problem/58/A
#include <bits/stdc++.h>
#define ll long long int
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

    string s;
    cin >> s;
    int cnt = 0;
    int i = 0;
    int x;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == 'h')
        {
            cnt++;
            x = i;
            break;
        }
    }
    for (i = x + 1; i < s.length(); i++)
    {
        if (s[i] == 'e')
        {
            cnt++;
            x = i;
            break;
        }
    }
    for (i = x + 1; i < s.length(); i++)
    {
        if (s[i] == 'l')
        {
            cnt++;
            x = i;
            break;
        }
    }
    for (i = x + 1; i < s.length(); i++)
    {
        if (s[i] == 'l')
        {
            cnt++;
            x = i;
            break;
        }
    }
    for (i = x + 1; i < s.length(); i++)
    {
        if (s[i] == 'o')
        {
            cnt++;
            x = i;
            break;
        }
    }

    (cnt == 5) ? cout << "YES\n" : cout << "NO\n";

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
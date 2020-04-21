//http://codeforces.com/problemset/problem/313/A
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

    ll n;
    cin >> n;

    if (n > 0)
    {
        cout << n;
    }
    else
    {
        ll temp = (-1) * n;
        string s = to_string(temp);
        ll ones = s[s.length() - 1] - '0';
        ll tens = s[s.length() - 2] - '0';
        (ones > tens) ? s.erase(s.begin() + (s.length() - 1)) : s.erase(s.begin() + (s.length() - 2));
        (s.length() == 1 && s[0] == '0') ? cout << s : cout << "-" << s;
    }

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
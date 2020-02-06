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

    string s, t;
    cin >> s;
    cin >> t;

    int ct = 0;

    for (int i = 0; i < s.length(); ++i)
    {
        char c;
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
    }

    for (int i = 0; i < t.length(); ++i)
    {
        char c;
        if (isupper(t[i]))
        {
            t[i] = tolower(t[i]);
        }
    }

    for (int i = 0; i < s.length(); ++i)
    {
        if (int(s[i]) > (t[i]))
        {
            cout << 1;
            break;
        }
        else if (int(s[i]) < int(t[i]))
        {
            cout << -1;
            break;
        }
        else
            ct++;
    }
    if (ct == s.length())
        cout << 0;

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
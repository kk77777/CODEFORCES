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

    string s;
    cin >> s;
    int u = 0, d = 0, x = 5;
    int y = s.length();
    if (s.length() % 2 != 0)
    {
        y = s.length() + 1;
    }

    for (int i = 0; i < s.length(); ++i)
    {
        if (isupper(s[i]))
        {
            u++;
            if (u > y / 2)
            {
                x = 1;
                break;
            }
        }
        else
        {
            d++;
            if (d >= y / 2)
            {
                x = 0;
                break;
            }
        }
    }

    if (x)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
            cout << s[i];
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
            cout << s[i];
        }
    }

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
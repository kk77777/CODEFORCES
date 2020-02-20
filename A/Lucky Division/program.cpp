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

    int n, c = 0;
    bool ch = false;
    cin >> n;

    for (int i = 4; i <= n; i++)
    {
        if (n % i == 0)
        {
            c = 0;
            string s;
            s = to_string(i);
            for (int k = 0; k < s.length(); k++)
            {
                if (s[k] == '4' || s[k] == '7')
                {
                    c++;
                }
            }
            if (c == s.length())
            {
                ch = true;
                cout << "YES";
                break;
            }
        }
    }
    if (!ch)
    {
        cout << "NO";
    }

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
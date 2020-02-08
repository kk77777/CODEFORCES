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

    int c = 0;

    for (int i = 2; i < s.length(); ++i)
    {
        if (s[i] == 'B')
        {
            if (s[i - 1] == 'U')
            {
                if (s[i - 2] == 'W')
                {
                    c++;
                    s.erase(s.begin() + i - 2);
                    s.erase(s.begin() + i - 2);
                    s[i - 2] = ' ';
                }
            }
        }
    }
    while (s[0] == ' ')
    {
        s.erase(s.begin());
    }

    cout << s;

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
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

    long int n, c = 0;
    cin >> n;

    string s = to_string(n);

    for (int i = 0; i < s.length(); ++i)
    {

        if (s[i] == '1')
        {
            c++;
        }
        if (s[i] == '4' && i > 0)
        {
            if (s[i - 1] == '1')
            {
                c++;
            }
        }
        if (s[i] == '4' && i > 1)
        {
            if (s[i - 2] == '1' && s[i - 1] == '4')
            {
                c++;
            }
        }
    }

    if (c == s.length())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
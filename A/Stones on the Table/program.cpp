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

    int n;
    cin >> n;
    string s;
    cin >> s;
    int r = 0;

    for (int i = 0; i < s.length() - 1;)
    {
        if (s[i] == s[i + 1])
        {
            r++;
            s.erase(s.begin() + i);
            i = 0;
        }
        else
        {
            i++;
        }
    }

    cout << r;

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
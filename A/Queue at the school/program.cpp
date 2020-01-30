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

    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    while (t)
    {
        t--;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                char temp;
                temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
                i += 1;
            }
        }
    }
    cout << s;

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
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
    // int tc;
    // cin >> tc;
    // while (tc--)
    // {
    string s;
    cin >> s;
    int n = s.length();
    int a[26] = {0};
    for (int i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] % 2 == 1)
        {
            cnt++;
        }
    }
    if (cnt == 0)
        cout << "First";
    else if (cnt == 1)
        cout << "First";
    else if (cnt % 2 == 0)
        cout << "Second";
    else
        cout << "First";
        // cout << "\n";
        // }
#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
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

    int c = 0;
    cin >> s;
    int l = s.length();
    int count[26] = {0}, x;

    for (int i = 0; i < s.length(); ++i)
    {
        x = s[i] - 'a';
        count[x]++;
        if (count[x] == 2)
        {
            c++;
            count[x]--;
            l--;
        }
    }
    if (l % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
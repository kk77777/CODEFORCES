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

    unsigned long long int n, c = 0, seven = 0, four = 0, total = 0;
    cin >> n;
    string s = to_string(n);

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            if (s[i] == '4')
            {
                four++;
            }
            else
                seven++;
        }
        else
        {
            c++;
        }
    }
    total = four + seven;
    int ans = 0;
    if ((total == 4) || total == 7)
        ans = -1;
    if ((four != 0 || seven != 0) && (ans == -1))
        cout << "YES";

    else
    {
        cout << "NO";
    }

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
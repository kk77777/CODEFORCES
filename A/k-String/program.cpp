//https://codeforces.com/problemset/problem/219/A
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

    int k, cnt = 0;
    char ch;
    cin >> k;
    string s;
    cin >> s;
    int n = s.size();
    sort(s.begin(), s.begin() + s.size());
    for (int i = 0; i < s.size(); i++)
    {
        if (i % k == 0)
        {
            ch = s[i];
        }
        if (s[i] == ch)
        {
            cnt++;
        }
    }
    if (n == cnt && cnt % k == 0)
    {
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < s.size(); j += k)
            {
                cout << s[j];
            }
        }
    }
    else
    {
        cout << "-1";
    }
#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
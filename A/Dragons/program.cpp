//https://codeforces.com/problemset/problem/230/A
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

    int n, s;
    cin >> n >> s;
    vector<pair<int, int>> d;
    for (int i = 0; i < s; i++)
    {
        int x, y;
        cin >> x >> y;
        d.push_back({x, y});
    }
    // for (int i = 0; i < s; i++)
    // {
    //     cout << d[i].first << " " << d[i].second << "\n";
    // }
    sort(d.begin(), d.end());
    int cnt = 0;
    for (int i = 0; i < s; i++)
    {
        if (d[i].first < n)
        {
            cnt++;
            n += d[i].second;
        }
    }

    (cnt == s) ? cout << "YES" : cout << "NO";

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
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

    int x, y, a, b, c = 0;
    cin >> x >> y >> a >> b;
    vector<pair<int, int>> v;

    for (int i = a; i <= x; ++i)
    {
        for (int j = b; (j <= y && j < i); ++j)
        {
            v.push_back(make_pair(i, j));
            c++;
        }
    }
    if (!c)
        cout << 0 << "\n";
    else
    {
        cout << c << "\n";
        for (int i = 0; i < v.size(); ++i)
        {
            cout << v[i].first << " " << v[i].second << "\n";
        }
    }

#ifndef ONLINE_JUDGE
    cout
        << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
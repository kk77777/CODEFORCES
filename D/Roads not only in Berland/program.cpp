#include <bits/stdc++.h>
#define fr(i, a, b) for (int i = a; i < b; ++i)
#define N 1010
using namespace std;

int n, x, y, parent[N];
vector<pair<int, int>> a, b;

int find(int n) { return n == parent[n] ? n : parent[n] = find(parent[n]); }

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    fr(i, 1, n + 1) parent[i] = i;
    fr(i, 1, n)
    {
        cin >> x >> y;
        if (find(x) != find(y))
            parent[find(x)] = find(y);
        else
            a.push_back({x, y});
    }
    fr(i, 1, n + 1) fr(j, i + 1, n + 1) if (find(i) != find(j)) b.push_back({i, j}), parent[find(i)] = find(j);

    cout << a.size() << "\n";
    fr(i, 0, a.size()) cout << a[i].first << " " << a[i].second << " " << b[i].first << " " << b[i].second << "\n";

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
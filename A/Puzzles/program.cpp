//https : //codeforces.com/problemset/problem/337/A
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

    int n, m;
    cin >> n >> m;
    vector<int> v;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int minm = INT_MAX;

    int i = 0, j = n - 1;
    while (i < m && j < m)
    {
        if (minm > (v[j] - v[i]))
        {
            // cout << v[j] - v[i] << "\n";
            minm = v[j] - v[i];
        }
        i++;
        j++;
    }
    cout << minm;

#ifndef ONLINE_JUDGE
    cout
        << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
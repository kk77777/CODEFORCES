//http://codeforces.com/problemset/problem/160/A
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

    int n;
    cin >> n;
    int tsum = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        tsum += x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), greater<int>());

    int sum = 0;
    int i = 0;
    while (sum <= tsum / 2)
    {
        sum += v[i];
        i++;
    }

    cout << i;

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
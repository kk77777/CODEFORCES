//http://codeforces.com/problemset/problem/41/A
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

    string x, y;
    cin >> x;
    cin >> y;
    reverse(x.begin(), x.end());
    if (x == y)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
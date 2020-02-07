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

    int t;
    cin >> t;
    vector<int> p, n, z;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
            p.push_back(x);
        if (x < 0)
            n.push_back(x);
        if (x == 0)
            z.push_back(x);
    }
    if (p.size() == 0)
    {
        for (int i = 0; i < 2; ++i)
        {
            int x = n[i];
            p.push_back(x);
            n.erase(n.begin() + i);
        }
    }
    if (n.size() % 2 == 0)
    {

        int x = n[0];
        z.push_back(x);
        n.erase(n.begin());
    }
    cout << n.size() << " ";
    for (int i = 0; i < n.size(); ++i)
    {
        cout << n[i] << " ";
    }
    cout << "\n";

    cout << p.size() << " ";
    for (int i = 0; i < p.size(); ++i)
    {
        cout << p[i] << " ";
    }
    cout << "\n";

    cout << z.size() << " ";
    for (int i = 0; i < z.size(); ++i)
    {
        cout << z[i] << " ";
    }

#ifndef ONLINE_JUDGE
    cout
        << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
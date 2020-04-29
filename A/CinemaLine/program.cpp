// http://codeforces.com/problemset/problem/349/A
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

    ll n;
    cin >> n;
    vector<int> v;
    int change = 0;
    bool flag = 0;

    int ntwentyFiv = 0;
    int nfifty = 0;
    int nHundred = 0;
    for (auto i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);

        if (x != 25)
        {
            if (x == 50)
            {
                if (ntwentyFiv > 0)
                {
                    ntwentyFiv--;
                    nfifty++;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            if (x == 100)
            {
                if (ntwentyFiv > 0 && nfifty > 0)
                {
                    ntwentyFiv--;
                    nfifty--;
                }
                else if (ntwentyFiv >= 3)
                {
                    ntwentyFiv -= 3;
                }

                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        else
        {
            ntwentyFiv++;
        }
    }

    if (flag)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
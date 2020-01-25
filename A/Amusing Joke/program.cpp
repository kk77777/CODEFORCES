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

    string x, y, z;
    cin >> x >> y >> z;

    if (z.length() != (x.length() + y.length()))
        cout << "NO";
    else
    {

        for (int i = 0; i < z.length(); ++i)
        {
            for (int j = 0; j < y.length(); ++j)
            {
                if (z[i] == y[j])
                {
                    z.erase(z.begin() + i);
                    y.erase(y.begin() + j);
                    i = 0;
                    j = 0;
                }
            }
        }
        for (int i = 0; i < z.length(); ++i)
        {
            for (int j = 0; j < x.length(); ++j)
            {
                if (z[i] == x[j])
                {
                    z.erase(z.begin() + i);
                    x.erase(x.begin() + j);
                    i = 0;
                    j = 0;
                }
            }
        }
        if ((z.length() == x.length() == 1) && (z[0] == x[0]))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
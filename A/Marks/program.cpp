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

    int n, m, c = 0;
    cin >> n >> m;

    int marks[110];
    for (int k = 0; k <= m; k++)
    {
        marks[k] = 0;
    }
    int a[110][110];

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            a[i][j] = int(s[j]) - 48;
            if (marks[j] < a[i][j])
            {
                marks[j] = a[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == marks[j])
            {
                c++;
                break;
            }
        }
    }

    cout << c;

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
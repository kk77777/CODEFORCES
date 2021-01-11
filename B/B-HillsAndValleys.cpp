#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 3e5;
int a[N], n;

int isValley(int x)
{
    return (x > 0 && x < n - 1 && a[x] < a[x - 1] && a[x] < a[x + 1]);
}

int isHill(int x)
{
    return (x > 0 && x < n - 1 && a[x] > a[x - 1] && a[x] > a[x + 1]);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int is[n] = {};
        int tot = 0;
        for (int i = 1; i < n - 1; i++)
        {
            // cout << " i = " << i << "\n";
            if (isValley(i) || isHill(i))
            {
                is[i] = 1;
                tot++;
            }
        }
        int ans = tot;
        for (int i = 1; i < n - 1; i++)
        {
            int t = a[i];
            //Case 1:
            a[i] = a[i - 1];
            ans = min(ans, tot - is[i - 1] - is[i] - is[i + 1] + isHill(i - 1) + isHill(i) + isHill(i + 1) + isValley(i - 1) + isValley(i) + isValley(i + 1));
            //Case 2:
            a[i] = a[i + 1];
            ans = min(ans, tot - is[i - 1] - is[i] - is[i + 1] + isHill(i - 1) + isHill(i) + isHill(i + 1) + isValley(i - 1) + isValley(i) + isValley(i + 1));
            a[i] = t;
        }

        cout << ans << "\n";
    }
#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
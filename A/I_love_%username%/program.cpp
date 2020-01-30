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

    int n, c = 0, x;
    cin >> n;
    cin >> x;
    int max = x;
    int min = x;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        if (x > max)
        {
            c++;
            max = x;
        }
        if (x < min)
        {
            c++;
            min = x;
        }
    }
    cout << c;

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
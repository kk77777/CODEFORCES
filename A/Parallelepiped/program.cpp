//http://codeforces.com/problemset/problem/224/A
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int f(int s1, int s2, int s3)
{
    int ans = sqrt((s1 * s2) / s3);
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    int a = f(s1, s2, s3);
    int b = f(s1, s3, s2);
    int c = f(s2, s3, s1);

    cout << 4 * (a + b + c);

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
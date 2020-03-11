#include <bits/stdc++.h>
#define ll long long
#define maxn 2000010
using namespace std;

string s[maxn];
ll fa[maxn], vis[maxn], vis2[maxn];
vector<ll> ans;

int find(ll x)
{
    if (fa[x] == x)
        return x;
    return fa[x] = find(fa[x]);
}

bool makeUnion(ll x, ll y)
{
    ll rx = find(x);
    ll ry = find(y);
    if (rx != ry)
    {
        fa[rx] = ry;
        return true;
    }
    return false;
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

    ll n;
    cin >> n;
    for (int i = 1; i <= 200; i++)
        fa[i] = i;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s[i].length(); ++j)
        {
            for (int k = j; k < s[i].length(); ++k)
            {
                ll x = s[i][j] - 'a';
                ll y = s[i][k] - 'a';
                makeUnion(x, y);
                if (!vis[x])
                {
                    ans.push_back(x);
                    vis[x] = 1;
                }
                if (!vis[y])
                {
                    ans.push_back(y);
                    vis[y] = 1;
                }
            }
        }
    }

    ll res = 0;
    for (auto i = 0; i < ans.size(); i++)
    {
        int x = find(ans[i]);
        if (!vis2[x])
        {
            res++;
            vis2[x] = 1;
        }
    }

    cout << res;

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
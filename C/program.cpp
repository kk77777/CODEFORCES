//https://codeforces.com/contest/1324/problem/C
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "rt", stdin);
    //     freopen("output.txt", "wt", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        ll l = 0, r = 0, start, end;
        ll streak = 0, mstreak = 0, ko = 0;
        vector<ll> addl, addr;
        cin >> s;
        for (auto i = 0; i < s.length(); i++)
        {
            if (s[i] == 'L')
            {
                l++;
                if (s[i - 1] == 'L')
                {
                    streak++;
                    if (mstreak < streak)
                    {
                        mstreak = streak;
                        ko = i;
                    }
                    // cout << "ms = " << mstreak << "\n";
                }
                else
                    streak = 0;
                addl.push_back(i);
            }

            else
            {
                if (r == 0)
                    start = i;

                r++;
                addr.push_back(i);
            }
        }
        if (r == s.length())
        {
            cout << 1 << "\n";
        }
        else if (l == s.length())
        {
            cout << s.length() + 1 << "\n";
        }
        else
        {
            // cout << addr[0] << " " << addr[addr.size() - 1] << "\n";
            // cout << "mstreak" << mstreak;
            ll d = s.length() - addr[addr.size() - 1];
            ll mind = max(addr[0] + 1, d);
            cout << max(mind, mstreak + 2) << "\n";
            // cout << "ko = " << ko << "\n";
        }
    }
#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
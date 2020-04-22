//https://codeforces.com/problemset/problem/118/A
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool isVowel(char x)
{
    if (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' || x == 'Y' || x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y')
        return true;
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

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (isVowel(s[i]))
            continue;
        else
        {
            cout << "." << char(tolower(s[i]));
        }
    }

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
    return 0;
}
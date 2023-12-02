#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long
#define ull unsigned long long

void solve()
{
    ll n = 1000, count = 0;
    char first, last;
    string s;
    while (n--)
    {
        cin >> s;
        for (int i = 0; i < s.size(); i++)
            if (s[i] >= '0' && s[i] <= '9')
            {
                first = s[i];
                break;
            }
        for (int i = s.size() - 1; i >= 0; i--)
            if (s[i] >= '0' && s[i] <= '9')
            {
                last = s[i];
                break;
            }

        string num = string{first, last};
        count += stoll(num);
    }
    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}

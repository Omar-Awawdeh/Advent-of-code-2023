#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long
#define ull unsigned long long

void solve()
{
    ll n = 1000, count = 0, first_int_index = 9999999999999, last_int_index = -1;
    char first, last;
    map<string, char> num_map = {
        {"one", '1'},
        {"two", '2'},
        {"three", '3'},
        {"four", '4'},
        {"five", '5'},
        {"six", '6'},
        {"seven", '7'},
        {"eight", '8'},
        {"nine", '9'}};
    string s;
    while (n--)
    {
        cin >> s;
        first = last = '0';
        first_int_index = 9999999999999;
        last_int_index = -1;
        for (int i = 0; i < s.size(); i++)
            if (s[i] >= '0' && s[i] <= '9')
            {
                first_int_index = i;
                first = s[i];
                break;
            }
        for (int i = s.size() - 1; i >= 0; i--)
            if (s[i] >= '0' && s[i] <= '9')
            {
                last_int_index = i;
                last = s[i];
                break;
            }
        for (auto num_pair : num_map)
        {
            int start_pos = s.find(num_pair.first);
            int end_pos = s.rfind(num_pair.first);
            if (start_pos == string::npos || end_pos == string::npos)
                continue;
            end_pos += num_pair.first.size() - 1;
            if (start_pos < first_int_index)
            {
                first = num_pair.second;
                first_int_index = start_pos;
            }

            if (end_pos > last_int_index)
            {
                last = num_pair.second;
                last_int_index = end_pos;
            }
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

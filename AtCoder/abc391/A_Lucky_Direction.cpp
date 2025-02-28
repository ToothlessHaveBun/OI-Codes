#include <bits/stdc++.h>
#define lo long long
#define INF INT_MAX
#define LLM LONG_LONG_MAX

using namespace std;
const int N = 1e7 + 10;
/*
    toothless. #17
    @fredcss_dev
*/

map<string, string> mp;

string n;

signed main()
{
    mp["N"] = "S";
    mp["E"] = "W";
    mp["W"] = "E";
    mp["S"] = "N";
    mp["NE"] = "SW";
    mp["NW"] = "SE";
    mp["SE"] = "NW";
    mp["SW"] = "NE";
    cin >> n;
    cout << mp[n];
    return 0;
}
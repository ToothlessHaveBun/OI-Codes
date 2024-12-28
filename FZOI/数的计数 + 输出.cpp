#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define IMX LONG_LONG_MAX
#define IMN LONG_LONG_MIN
#define debug$ if (dev)
using namespace std;

/* toothless. #17 */

const int N = 1e7 + 10;
const int M = 2e3 + 5;
const bool dev = false;

string s;
int len, last, pre, x, flag, cs;
char ch;
vector<string> lstr, rstr;

bool iszf(char ch)
{
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

bool is_num(char s)
{
    return s >= '0' && s <= '9';
}

bool is_str(const std::string &s)
{
    char *endptr;
    strtod(s.c_str(), &endptr);
    return !(*endptr == '\0');
}

int renum(string s)
{
    string t = s.substr(0, s.size());
    return stoi(t);
}
void print()
{
    int ll = lstr.size();
    for (int i = 0; i < ll; i ++ )
        cout << lstr[i] << ' ';
    cout << endl ;
    ll = rstr.size();
    for (int i = 0; i < ll; i ++ )
        cout << rstr[i] << ' ';
    cout << endl ;
}

bool is_ch(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
signed main()
{
    ch = ' ';
    getline(cin, s);
    len = s.size();
    for (int i = 0; i < s.size(); i++)
    {
        if (!(is_num(s[i])) && !iszf(s[i]) && is_ch(s[i]))
            ch = s[i];
        if (s[i] == '=')
        {
            flag = 1;
            lstr.push_back(s.substr(last, i - last));
            last = i + 1;
            pre = i;
        }
        if (iszf(s[i]))
        {
            string wxh = s.substr(last, i - last);
            if (wxh.size() == 1 && is_str(wxh))
            {
                wxh.insert(0, "1");
            }
            if (!flag)
                lstr.push_back(wxh);
            else
                rstr.push_back(wxh);
            last = i;
        }
    }
    string wty = s.substr(last, s.size() - last);
    if (wty.size() == 1 && is_str(wty))
        wty.insert(0, "1");
    rstr.push_back(wty);
    int l = lstr.size();
    for (int i = 0; i < l; i ++ )
    {
        if (!is_str(lstr[i]))
            cs += stod(lstr[i]);
        else
            x -= renum(lstr[i]);
    }
    l = rstr.size();
    for (int i = 0; i < l; i ++ )
    {
        if (!is_str(rstr[i]))
            cs -= stod(rstr[i]);
        else
            x += renum(rstr[i]);
    }
    double cnt = cs * 1.0 / (x == 0 ? 1 : x);
    printf("%c=%.3lf", ch, cnt);
    return 0;
}
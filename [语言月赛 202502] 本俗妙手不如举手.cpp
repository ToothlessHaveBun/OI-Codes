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

int f(int n, int k, vector<int>& a) {
    // 初始胜场数计算
    int red = 0, pink = 0;
    for (int ai : a) {
        if (ai > 49) {
            red++;
        } else { 
            pink++;
        }
    }
    int cnt = 0;
    for (int l = 0; l <= n - k; l++) {
        int chr = 0, cpi = 0;
        for (int i = l; i < l + k; i++) {
            bool ysfred = (a[i] > 49);
            int tzhred = a[i] - 2;
            int tzhpink = 101 - a[i];
            bool tzhredWin = (tzhred > tzhpink);
            if (ysfred && !tzhredWin) {
                chr--;
                cpi++;
            } else if (!ysfred && tzhredWin) {
                chr++;
                cpi--;
            }
        }
        int nre = red + chr;
        int npi = pink + cpi;
        if (npi > nre) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int result = f(n, k, a);
    cout << result << endl;
    return 0;
}
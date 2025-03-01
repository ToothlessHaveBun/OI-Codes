// 这个代码尚未正确，仅作参考价值

#include <bits/stdc++.h>
#define lo long long
#define INF INT_MAX
#define LLM LONG_LONG_MAX
#define endl "\n"

using namespace std;
/*
    toothless. #17
    @fredcss_dev
*/

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, Q;
    cin >> N >> Q;
    vector<int> pigeon_to_nest(N + 1);
    vector<unordered_set<int>> nest_to_pigeons(N + 1);
    for (int i = 1; i <= N; ++i) {
        pigeon_to_nest[i] = i;
        nest_to_pigeons[i].insert(i);
    }
    for (int q = 0; q < Q; ++q) {
        int type;
        cin >> type;

        if (type == 1) {
            int a, b;
            cin >> a >> b;
            int current_nest = pigeon_to_nest[a];
            nest_to_pigeons[current_nest].erase(a);
            pigeon_to_nest[a] = b;
            nest_to_pigeons[b].insert(a);
        } else if (type == 2) {
            int a, b;
            cin >> a >> b;
            swap(nest_to_pigeons[a], nest_to_pigeons[b]);
            for (int pigeon : nest_to_pigeons[a]) {
                pigeon_to_nest[pigeon] = a;
            }
            for (int pigeon : nest_to_pigeons[b]) {
                pigeon_to_nest[pigeon] = b;
            }
        } else if (type == 3) {
            int a;
            cin >> a;
            cout << pigeon_to_nest[a] << endl;
        }
    }
    return 0;
}

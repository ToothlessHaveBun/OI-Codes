#include <bits/stdc++.h>
#define lo long long
#define INF INT_MAX
#define LLM LONG_LONG_MAX
#define endl "\n"

using namespace std;
const int N = 1e7 + 10;
/*
    toothless. #17
    @fredcss_dev
*/

vector<int> f(int root, const vector<vector<int>>& adj) {
    vector<int> post_order;
    stack<tuple<int, int, bool>> s;
    s.push({root, -1, false});
    
    while (!s.empty()) {
        auto [node, parent, visited] = s.top();
        s.pop();
        if (visited) {
            post_order.push_back(node);
        } else {
            s.push({node, parent, true});
            for (int neighbor : adj[node]) {
                if (neighbor != parent) {
                    s.push({neighbor, node, false});
                }
            }
        }
    }
    return post_order;
}

void wczffl_503() {
    int t;
    cin >> t;
    while (t--) {
        int n, st, en;
        cin >> n >> st >> en;
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < n - 1; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> p = f(en, adj);
        if (p.back() != en) {
            p.push_back(en);
        }
        for (int x : p) {
            cout << x << ' ';
        }
        cout << '\n';
    }
}

int main() {
    wczffl_503();
    return 0;
}
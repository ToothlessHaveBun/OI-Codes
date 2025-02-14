#include <bits/stdc++.h>
#define lo long long
#define INF 0x3f3f3f3f3f3f3f3fl
#define LLM LONG_LONG_MAX

using namespace std;
const lo N = 1e5 + 10;
/*
    toothless. #17
    @fredcss_dev
*/

struct Edge {
	lo u, v, w;
};

lo t, n, m;
lo c, p, W;
	
vector<Edge> edge;

lo dis[N], u, v, w;

bool bellmanford(lo n, lo s)
{
	memset(dis, 0x3f, (n + 1) * sizeof(lo));
	dis[s] = 0;
	bool flag = false;
	for (lo i = 1; i <= n; i++) {
		flag = false;
		for (lo j = 0; j < edge.size(); j++) {
			u = edge[j].u, v = edge[j].v, w = edge[j].w;
			if (dis[u] == INF) continue;
			if (dis[v] > dis[u] + w) {
				dis[v] = dis[u] + w;
				flag = true;
			}
		}
		if (!flag) {
			break;
		}
	}
	return flag;
}

signed main()
{
	cin >> t;
	while (t--) {
		edge.clear();
		cin >> n >> m;
		for (lo i = 1; i <= m; i++) {
			cin >> c >> p >> W;
			edge.push_back({c, p, W});
			if (W >= 0) edge.push_back({p, c, W});
		}
		if (bellmanford(n, 1)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}

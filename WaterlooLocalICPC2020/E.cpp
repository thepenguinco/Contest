#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void dfs(unordered_set<int> visited,
    unordered_map<int, int> lowTime,
    unordered_map<int, int> visitedTime,
    unordered_map<int, int> parent,
    vector<int> visited, 
    vector<int> graph,
    vector<pair<int, int>> res,
    int node,
    int time
) {
    visited.insert(node);
        self.visitedTime[node] = self.time
        self.lowTime[node] = self.time
        self.time += 1
        for adj in self.graph[node]:
            if self.parent[node] == adj:
                continue
            if adj not in self.visited:
                self.parent[adj] = node
                self.dfs(adj)
                if self.visitedTime[node] < self.lowTime[adj]:
                    self.res.append([node, adj])
                else:
                    self.lowTime[node] = min(self.lowTime[node], self.lowTime[adj])
            else:
                self.lowTime[node] = min(self.lowTime[node], self.visitedTime[adj])
        
}
// we use tarjan's to find the = edges
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N,M;

    vector<int> graph[N + 1];
    vector<string> order;
    unordered_map<pair<int, int>, char> edges;
    cin >> N >> M;
    for (int i = 0; i < M;++i) {
        int a;
        int b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        edges.insert(make_pair(a,b));
    }

    unordered_set<int> visited;
    unordered_map<int, int> lowTime;
    unordered_map<int, int> visitedTime;
    unordered_map<int, int> parent;
    int time = 0;
    parent[1] = 0;
    vector<pair<int, int>> res;
    dfs(visited,
    lowTime,
    visitedTime,
    parent,
    visited, 
    graph,
    res,
    1,
    0);
    for (int i = 0; i < res.size(); ++i) {
        cout << res.first << " " << res.second;
    }
}

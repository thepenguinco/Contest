#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, M, T;
    cin >> N >> M >> T;
    vector<pair<int,int>> graph[N + 1];
    unordered_map<int, char> res;
    for (int i = 0; i < M; ++i) {
        int D, A, B;
        cin >> D >> A >> B;
        graph[A].push_back(make_pair(B,D));
        graph[B].push_back(make_pair(A,D));
    }
    for (int i = 1; i <= N; ++i) {
        res[i] = '?';
    }
    for (int i = 0; i < T; ++i) {
        char test;
        int person;
        cin >> test >> person;
        list<pair<int, int>> queue;
        queue.push_back(make_pair(person, 101));
        while (!queue.empty()) {
            int node = queue.front().first;
            int time = queue.front().second;
            queue.pop_front();
            if (test == '+') {
                res[node] = '+';
            }
            else if (res[node] != '+' && test == '-') {
                res[node] = '-';
            } 
            for (size_t i = 0; i < graph[node].size(); ++i) {
                if (graph[node][i].second < time) {
                    queue.push_back(graph[node][i]);
                }
            }
        } 
    }
    for (int i = 1; i <= N; ++i) {
        cout << res[i] << '\n';
    }
}
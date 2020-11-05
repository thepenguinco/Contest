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
    int W, P;
    int p;
    vector<int> partition;
    vector<int> sol;
    unordered_set<int> it;
    cin >> W >> P;
    partition.push_back(0);
    for (int i = 0; i < P; ++i) {
        cin >> p;
        partition.push_back(p);
    }
    partition.push_back(W);
    for (int i = 0; i < P + 2; ++i) {
        for (int j = 0; j < i; ++j) {
            it.insert(partition[i] - partition[j]);
        }
    }
    for (int elem: it) {
        sol.push_back(elem);
    }
    sort(sol.begin(), sol.end());
    for (int elem: sol) {
        cout << elem << " ";
    }
}
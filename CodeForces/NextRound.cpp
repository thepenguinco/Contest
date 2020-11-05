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
    int N,K;
    cin >> N >> K;
    int R = 0;
    vector<int> rounds;
    for (int i = 0; i < N; ++i) {
        int A;
        cin >> A;
        rounds.push_back(A);
    }
    sort(rounds.begin(), rounds.end(), greater<int>());
    int prev = -1;
    for (int i = 0; i < N; ++i) {
        if (rounds[i] > 0 && K > 0) {
            R++;
            K-=1;
            prev = rounds[i];
        }
        else if (rounds[i] == prev) {
            R++;
        }
        else {
            break;
        }
    }
    cout << R << endl;
}
#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

unordered_set<char> solved;
unordered_set<char> unsolved;

void solve() {
    int count = 0;
    int penalty = 0;
    char problem;
    int time;
    string correct;
    while(cin >> problem) {
        if (problem == '-') {
            break;
        }
        else {
            cin >> time >> correct;
            if (correct == "correct" && unsolved.find(problem) != unsolved.end()) {
                count++;
                penalty += time;
                penalty += 20;
                solved.insert(problem);
            }
            else if (correct == "correct" && solved.find(problem) == solved.end()) {
                count++;
                penalty += time;
                unsolved.erase(problem);
                solved.insert(problem);
            }
            else if (correct == "incorrect") {
                unsolved.insert(problem);
            }
        }
    }
    cout << count << " " << penalty << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc = 1; //cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}
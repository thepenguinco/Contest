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
    int N;
    cin >> N;
    int x{0};
    for (int i = 0; i < N; ++i) {
        string input;
        cin >> input;
        if (input.find('+') != std::string::npos) {
            x++;
        }
        else {
            x--;
        }
    }
    cout << x << endl;
}
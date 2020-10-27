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
    string s;
    string t;
    cin >> s >> t;
    for (int i = 0; i < s.size(); ++i) {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; i < t.size(); ++i) {
        t[i] = tolower(t[i]);
    }
    if (s == t) {
        cout << 0 << endl;
    }
    else if (s < t) {
        cout << -1 << endl;
    }
    else {
        cout << 1 << endl;
    }
}
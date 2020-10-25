#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

int D (int n) 
{ 
    int c = 0; 
    for (int i = 1; i <= sqrt(n); ++i) { 
        if (n % i == 0) { 
            if (n / i == i) c++; 
            else {
                c += 2;
            } 
        } 
    } 
    return c; 
} 

void S(int n, int m, vector<int> &set) {
    for (int i = n; i <= m + n; ++i) {
        if ((n % i) + (m % i) >= i) {
            set.push_back(i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, M;
    cin >> N >> M;
    vector<int> set;
    S(min(N,M), max(N,M), set);
    int res = 0;
    for (size_t i = 0; i < set.size(); ++i) {
        res += D(set[i]);
    }
    cout << res;
}
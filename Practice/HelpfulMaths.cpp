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
    string input;
    vector<int> nums;
    getline (cin, input);
    stringstream ss(input);
    string token;
    string res = "";
    while (getline(ss, token, '+')) {
        nums.push_back(stoi(token));
    }
    sort(nums.begin(), nums.end());
    for (size_t i = 0; i < nums.size(); ++i) {
        res += to_string(nums[i]);
        if (i != nums.size() - 1) {
            res += "+";
        }
    }
    cout << res << endl;
}
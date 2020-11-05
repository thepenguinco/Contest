#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void rotate(vector<vector<char>> &arr, int l) {
    // transpose
    for (int i = 0; i < l; ++i) {
        for (int j = i + 1; j < l; ++j) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // flip
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < l / 2; ++j) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][l - j - 1];
            arr[i][l - j - 1] = temp;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        string s;
        cin >> s;
        int l = ceil(sqrt(s.length()));
        int count = 0;
        vector<vector<char>> arr(l);
        for (int i = 0; i < l; ++i) {
            arr[i] = vector<char>(l);
            for (int j = 0; j < l; ++j) {
                if (count < s.length()) {
                    arr[i][j] = s[count++];
                }
                else {
                    arr[i][j] = '*';
                }
            }
        }
        rotate(arr, l);
        string ans = "";
        for (int i = 0; i < l; ++i) {
            for (int j = 0; j < l; ++j) {
                if (arr[i][j] != '*')
                {
                    ans += arr[i][j];
                }
            }
        }
        cout << ans << endl;
    }
}
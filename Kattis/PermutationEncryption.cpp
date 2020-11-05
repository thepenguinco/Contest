#include<bits/stdc++.h>
using namespace std;

template<typename T>

void p(std::vector<T> text) 
{ 
    for (const auto & value: text) cout << value << " "; 
    cout << endl;
} 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int K;
    while (true) {
        cin >> K;
        if (K == 0) return 0;
        vector<int> key;
        for (int i = 0; i < K; ++i) {
            int k;
            cin >> k;
            key.push_back(k);
        }
        cin.ignore();
        string input;
        string output = "";
        getline(cin, input);
        for (int i = 0; i < (input.size() - (input.size() / K) * K); ++i) {
            input += " ";
        }
        for (int i = 0; i < input.size() / K; ++i) {
            for (int j = 0; j < key.size(); ++j) {
                output += input[(i * K) + key[j] - 1];
            }
        }
        cout << '\'' << output << '\'' << endl;
    } 
}
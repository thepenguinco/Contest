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
    while (true) {
        long long A,B;
        cin >> A >> B;
        long long C = A;
        long long D = B;
        if (A == 0 || B == 0) break;
        unordered_map<long long, long long> valA;
        long step = 0;
        while (A != 1) {
            valA[A] = step++;
            if ((A & 1) == 0) A /= 2;
            else A = 3*A + 1;
        };
        valA[1] = step;
        step = 0;
        do {
            if (valA.find(B) != valA.end()) {
                cout << C << " needs " << valA[B] << " steps, " << D << " needs " << step << " steps, they meet at " << B << endl;
                break;
            }
            if ((B & 1) == 0) B /= 2;
            else B = 3*B + 1;
            step++;
        } while (B >= 1);
    }
}
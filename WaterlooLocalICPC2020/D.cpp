#include <bits/stdc++.h>
#include <map>
#include<vector>
#include<string>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



map<string, int> day;
map<string, vector<string>> graph;
vector<string> order;
unordered_set<string> visited;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N;
    string start;
    cin >> N;
    cin.ignore(256, '\n');
    for (int i = 0; i < N; ++i) {
        string input;
        getline(std::cin, input);
        vector<string> tokens;
        string token;
        istringstream tokenStream(input);
        while (std::getline(tokenStream, token, ' '))
        {
            tokens.push_back(token);
        }
        order.push_back(tokens[0]);
        day[tokens[0]] = 0;
        for (size_t j = 4; j < tokens.size(); ++j) {
            graph[tokens[j]].push_back(tokens[0]);
        }
        if (i == 0) {
            start = tokens[0];
        }
    }
    list<pair<string, int>> queue;
    queue.push_back(make_pair(start, 1));
    while (!queue.empty()) {
        string country = queue.front().first;
        int cur = queue.front().second;
        queue.pop_front();
        if (visited.find(country) == visited.end()) {
        day[country] = cur;
        visited.insert(country);
        for (size_t i = 0; i < graph[country].size(); ++i) {
            queue.push_back(make_pair(graph[country][i], cur + 1));
        }
    } 
    }
    sort(order.begin(), order.end());
    for (int i = 0; i < N; ++i) {
        cout << day[order[i]] << endl;
    }
    return 0;
}
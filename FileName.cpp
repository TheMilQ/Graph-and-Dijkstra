#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int n = 5; /*liczba wierzcho³ków*/

int main() { 
    vector<vector<int>> graph(n);

    /*Dodawanie krawêdzi*/
    graph[0].push_back(2);
    graph[0].push_back(3);
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[2].push_back(1);
    graph[2].push_back(3);
    graph[3].push_back(2);
    graph[4].push_back(0);
    graph[4].push_back(1);
    graph[4].push_back(3);

    /*Wyœwietlanie grafu*/
    for (int i = 0; i < n; ++i) {
        cout << i << ": ";
        for (int j : graph[i]) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
typedef pair<int, int> pii;
void Al_Dijkstry(int source, vector<vector<pii>>& graph) {
    vector<int> dist(n, INT_MAX);
    graph.size() = n;
    priority_queue<pii, vector<pii>, greater<pii>> pq;
}
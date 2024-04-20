#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 100001;
int N;
vector<int> nodeList[SIZE];
int parent[SIZE];
bool visited[SIZE];

void traverse(int curr) {
    //cout << curr << ' ';
    for(int i=0; i<nodeList[curr].size(); i++) {
        int next = nodeList[curr][i];
        if(visited[next]) continue;
        visited[next] = true;
        parent[next] = curr;
        traverse(next);
    }
}

int main() {
    cin >> N;
    for(int i=0; i<N; i++) {
        int u, v;
        cin >> u>> v;
        nodeList[u].push_back(v);
        nodeList[v].push_back(u);
    }
    parent[1] = 1;
    traverse(1);

    for(int i=2; i<=N; i++) {
        cout << parent[i] <<'\n';
    }
    return 0;
}
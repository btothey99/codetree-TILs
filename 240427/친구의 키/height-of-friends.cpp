#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int SIZE = 100001;
int N, M;
vector<int> edgeList[SIZE];
int in_degree[SIZE];
queue<int> que;
vector<int> order;

int main() {
    cin >> N >> M;
    for(int i=0; i<M; i++) {
        int a, b;
        cin >> a >> b;
        edgeList[a].push_back(b);
        in_degree[b]++;
    }

    for(int i=1; i<=N; i++) {
        if(!in_degree[i]) que.push(i);
    }

    while(!que.empty()) {
        int curr = que.front();
        que.pop();
        order.push_back(curr);

        for(int i=0; i<edgeList[curr].size(); i++) {
            int next = edgeList[curr][i];
            in_degree[next]--;
            if(!in_degree[next]) {
                que.push(next);
            }
        }
    }

    for(int i=0; i<order.size(); i++) {
        cout << order[i] << " ";
    }

    return 0;
}
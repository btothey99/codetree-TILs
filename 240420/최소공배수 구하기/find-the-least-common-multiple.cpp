#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
    return(b, a % b);
}

int main() {
    int N, M;
    cin >> N >> M;
    int g;
    if(N < M) g = gcd(M, N);
    else g = gcd(N, M);

    cout << (N * M) / g;
    return 0;
}
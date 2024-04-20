#include <iostream>

using namespace std;

int N, M;

int gcd(int n, int m) {
    if(m==0) return n;
    return gcd(m, n % m);
}

int main() {
    cin >> N >> M;
    int ans;
    if(N < M) ans=gcd(M, N);
    else ans=gcd(N, M);

    cout << ans;
    return 0;
}
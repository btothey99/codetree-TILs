#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int idx = 1;
    for(int i=0; i<n; i++) {
        for(int i=0; i<n; i++) {
            if(idx == 10) idx =1;
            cout << idx++ <<' ';
        }
        cout << '\n';
    }
    return 0;
}
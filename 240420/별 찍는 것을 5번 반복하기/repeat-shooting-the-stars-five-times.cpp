#include <iostream>

using namespace std;

void printStart() {
    for(int i=0; i<10; i++) {
        cout << "*";
    }
    cout <<'\n';
}

int main() {
    printStart();
    printStart();
    printStart();
    printStart();
    printStart();
    return 0;
}
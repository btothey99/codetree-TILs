#include <iostream>
using namespace std;

void add(int key, int value) {
    
}

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        string cmd;
        if(cmd == "print_list") {
            print_list();
            continue;
        }
        int key, value;
        cin >> cmd >> key >> value;
        switch (cmd){
            case "add":
            add(key, value);
            break;
            case "find":
            find(key, value);
            break;
            case "remove":
            remove(key, value);
            break;
        }
        
    }
    return 0;
}
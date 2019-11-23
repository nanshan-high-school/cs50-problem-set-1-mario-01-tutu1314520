#include <iostream>
using namespace std;

int main() {
    int times;
    do {
        cout << "高度:";
        cin >> times;
       } while(times < 1 || times > 8);
       for(int t = 0; t < times;t++) {
           for (int n = 0; n <= t;n++){
                cout << "*";
            }
            cout << "\n";
        }
    } 

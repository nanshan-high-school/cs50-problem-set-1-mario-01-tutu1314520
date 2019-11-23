#include <iostream>
using namespace std;

int main(void) {
    int times;
    do {
        cout << "高度:";
        cin >> times;
       } while(times < 1 || times > 8);

       for(int t = 0; t < times;t++) {
           for(int j = 1;j <= 5 - t;j++){
		       cout << " ";
		       }
		       for(int n = 0;n <= t;n++){
		       cout << "#";
		       }
           cout << "\n";
       }       
}// 272 32 杜宸緯 655332

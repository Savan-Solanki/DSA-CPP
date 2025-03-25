#include <iostream>
using namespace std;

int main() {
    int rows = 4; 
    int i = 1;    

    while (i <= rows) {
        int spaces = i - 1; 
        int num = i;        

       
        int s = 1;
        while (s <= spaces) {
            cout << " ";
            s++;
        }

        
        int j = i;
        while (j <= rows) {
            cout << j;
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}


// 1234
//  234
//   34
//    4
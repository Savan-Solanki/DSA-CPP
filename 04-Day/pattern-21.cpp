#include <iostream>
using namespace std;

int main() {
    int rows = 4; 
    int i = 1;    
    while (i <= rows) {
        int spaces = rows - i; 
        int s = 1;

        // Print spaces
        while (s <= spaces) {
            cout << " ";
            s++;
        }

        // Print numbers
        int j = 1;
        while (j <= i) {
            cout << i;
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}


//    1
//   22
//  333
// 4444         
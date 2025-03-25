#include <iostream>
using namespace std;

int main() {
    int rows = 4; 
    int i = 1;   

    while (i <= rows) {
        int spaces = i - 1; 
        int s = 1;

        // Print spaces
        while (s <= spaces) {
            cout << " ";
            s++;
        }

        // Print numbers
        int j = i;
        while (j <= rows) {
            cout << i;
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}


// 1111
//  222
//   33
//    4

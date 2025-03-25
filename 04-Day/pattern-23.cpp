#include <iostream>
using namespace std;

int main() {
    int rows = 3;
    int num = 1; 
    int i = 1;    

    while (i <= rows) {
        int j = 1; 
        while (j <= i) {
            cout << num;
            num++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

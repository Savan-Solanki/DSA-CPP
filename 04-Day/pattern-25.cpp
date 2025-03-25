#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    int i = 1;
    
    while (i <= n) {
        int j = 1;
        // Print first decreasing numbers
        while (j <= n - i + 1) {
            cout << j;
            j++;
        }
        
        // Print stars
        int stars = (i - 1) * 2;
        while (stars > 0) {
            cout << "*";
            stars--;
        }
        
        // Print second decreasing numbers
        j = n - i + 1;
        while (j >= 1) {
            cout << j;
            j--;
        }
        
        cout << endl;
        i++;
    }
    
    return 0;
}

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
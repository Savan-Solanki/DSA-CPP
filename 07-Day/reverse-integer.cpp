#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while (x != 0) {
            int digit = x % 10;

            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10)) return 0;
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10)) return 0;

            ans = ans * 10 + digit;
            x = x / 10;
        }
        return ans;
    }
};

int main() {
    Solution s;
    int num;
    cout << "Enter an integer to reverse: ";
    cin >> num;
    cout << "Reversed integer: " << s.reverse(num) << endl;
    return 0;
}

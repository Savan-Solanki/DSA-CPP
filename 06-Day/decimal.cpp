// some stape
// ex: 10101 --> convert into pow --> 2pow4 + 2pow3 +2pow2 +2pow1 +2pow0
    // ignore 2pown == 0 --> 2pow4 +2pow2 + 2pow0 --> 16 +4 +1 ==21

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;

    int i  = 0;
    int ans  = 0;
    while(n != 0){
        int digit = n % 10; 
        if(digit == 1){
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}
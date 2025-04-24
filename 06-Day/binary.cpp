// some stap used
// 1. devide by 2 and store reminder
// 2. that repeat while n value is zero
// 3. after n value zero all reminder reverse

// Example : n = 10
    // when  n = 0 --> ans is --> 0101
    // now reverse ans. = 1010
    // final answer of 10 is : 1010

int range is (-2pow31, 2pow31-1)
#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;

    int ans  = 0;
    int i = 0;

    while(n != 0){
        int bit = n & 1;
        ans  = (bit * pow(10, i) + ans);
        n = n >> 1;
        i++;
    }
    cout<<"Answer is "<< ans <<endl;
    return 0;
}
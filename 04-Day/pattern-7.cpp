#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter pattern n value : ";
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = 1;
        // int val = i;   
        while(j<=i){
            // cout<<val<<" ";
            cout<<(i+j-1)<<" ";
            // val++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}

// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter value of n : ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        cout<<i<<endl;
    }

    return 0;
}

// This is also necessary
//  for( ; ; ){
//         cout<<i<<endl;
//     }
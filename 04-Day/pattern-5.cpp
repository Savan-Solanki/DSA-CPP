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
        while(j<=i){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}

// 1 
// 2 2 
// 3 3 3 

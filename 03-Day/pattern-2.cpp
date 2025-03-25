#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter pattern value : ";
    cin>>n;

    int i = 1;
    while(i <= n){
        int j = 1;
        while(j<=n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}

// 111
// 222
// 333
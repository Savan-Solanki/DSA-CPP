#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter pattern n value : ";
    cin>>n;

    int i = 1;
    while(i<=n){
        int space = n - i;
        while(space){
            cout<<" ";
            space--;
        }
        int j = 1;
        while(j<=i){
            cout<<j;
            j++;
        }
        int start = i-1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}

//    1   
//   121
//  12312
// 1234321 
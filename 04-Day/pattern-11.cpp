#include <iostream>
using namespace std;

int main() 
{
     int n;
    cout<<"Enter pattern n value : ";
    cin>>n;

    int i = 1;
    char ch = 'A';
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}

// A B C 
// D E F 
// G H I 
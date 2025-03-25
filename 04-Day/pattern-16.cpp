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
        // char ch = 'A'+n-i-j+1; 
        char ch = 'A'+n-i; 
        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}

// D 
// C D 
// B C D 
// A B C D 
#include <iostream>
using namespace std;

// void means nothing to return
// Function Signature
void printCounting(int n){

    // Function Body
    for(int i = 1; i <= n; i++){
        cout<<i<<" ";
    }
    cout<<endl;

}

int main() 
{
    int n;
    cin>>n;

    // Function call
    printCounting(n);

    return 0;
}
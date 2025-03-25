#include <iostream>
using namespace std;

int main() 
{
    // int n;
    // cout<<"Enter valueof n : ";
    // cin>>n;

    // int i = 1;
    // while(i<=n){
    //     cout<<i<<endl;
    //     i++;
    // }



    // sum 1 to n: code
    // int n;
    // cout<<"Enter valueof n : ";
    // cin>>n;

    // int sum = 0;
    // int i = 1;
    // while(i<=n){
    //     sum = sum + i;
    //     i++; 
    // }
    // cout<<"Value of sum is : "<<sum<<endl;



    // Prime number code
    // % = 0 (not prime)
    // % != 0 (prime)
    int n;
    cout<<"Enter valur of n : ";
    cin>>n;

    int i = 2;
    while(i < n){
        if(n%i == 0){
            cout<<"not prime for "<<i<<endl;
        }else{
            cout<<"prime for "<<i<<endl;
        }
        i++;
    }


    return 0;
}
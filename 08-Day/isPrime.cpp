#include <iostream>
using namespace std;

// 1 -> Prime
// 0 -> notPrime
bool isPrime(int n){

    for(int i = 2; i < n; i++){
        // not Prime
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}13

int main() 
{
    int n;
    cin>>n;

    if(isPrime(n)){
        cout<<"Is a Prime No."<<endl;
    }else{
        cout<<"Not a Prime No."<<endl;
    }
    
    return 0;
}
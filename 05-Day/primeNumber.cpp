#include <iostream>
using namespace std;

// int main() 
// {
//     int n;
//     cout<<"Enter the valur of n : ";
//     cin>>n;

//     for(int i = 2; i<n; i++){
//         if(n%i == 0){
//             cout<<i<<" Is Not a Prime Number";
//             break;
//         }else{
//             cout<<i<<" Is a Prime Number";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// Second Way of top code

// int main() 
// {
//     int n;
//     cout<<"Enter the valur of n : ";
//     cin>>n;
//     bool isPrime = 0;

//     for(int i = 2; i<n; i++){
//         if(n%i == 0){
//             isPrime = 0;
//             break;
//         }
//     }

//     if(isPrime == 0){
//         cout<<" Is Not a Prime Number"<<endl;
//     }else{
//          cout<<" Is a Prime Number"<<endl;
//     }

//     return 0;
// }


// Continue keyword;

int main() 
{
    for(int i = 0; i < 3; i++){
        cout<<"Hello Universe"<<endl;
        cout<<"I'm The Best"<<endl;
        continue;
        cout<<"I never loose"<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter value of a : "<<endl;
    cin>>a;
    cout<<"Enter value of b : "<<endl;
    cin>>b;
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of b is : "<<b<<endl;

    if(a>b){
        cout<<"a is bigger"<<endl;
    }else if(a < b){
        cout<<"b is bigger"<<endl;
    }else{
        cout<<"a and b same"<<endl;
    }

    return 0;
}

// cin not read " ", "\t", "\n", when using this all then used cin.get (work on ascii value)
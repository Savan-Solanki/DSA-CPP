#include <iostream>
using namespace std;

int main() 
{
    int a,b;

    cout<<"Enter ther valur of a :";
    cin>>a;

    cout<<"Enter ther valur of b :";
    cin>>b;

    char op;
    cout<<"Enter the Operation you want to perform : ";
    cin>>op;

    switch(op){
        case '+': cout<<(a + b)<<endl;
                  break;

        case '-': cout<<(a - b)<<endl;
                  break;

        case '*': cout<<(a * b)<<endl;
                  break;

        case '/': cout<<(a / b)<<endl;
                  break;

        case '%': cout<<(a % b)<<endl;
                  break;

        default : cout<<"Please Enter a valid Operation"<<endl;
    }

    return 0;
}
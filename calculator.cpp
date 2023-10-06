//                                     | Simple Calculator |
#include<iostream>
using namespace std;
int main()
{
    char operation;
    float num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Choose Operation('+','-','*','/'): ";
    cin>>operation;

    switch(operation){
        case '+':cout<<"Ans: "<<num1+num2;
        break;
        case '-':cout<<"Ans: "<<num1-num2;
        break;
        case '*':cout<<"Ans: "<<num1*num2;
        break;
        case '/':cout<<"Ans: "<<num1/num2;
        break;
        default:cout<<"*Please choose a valid operation";
    }
return 0;
}
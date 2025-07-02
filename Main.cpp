#include<iostream>
#include calculator.h"
using namespace std;

int main(){
char op;
int num1;
int num2;

cout<<"enter an op(+,-,*,/):";
cin>>op;

cout<<"enter two numbers:";
cin>>num1>>num2;

switch (op){
  case '+':
    cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
    break;

  case '-':
     cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
     break;

  case '*':
    cout<<num1<<"*"<<num2<<"="<<num1"num2<<endl;
    break;

  case '/'
    cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
    break;

  default:
    cout<<"invalid value"<<endl;
    break;
}

return 0;
}

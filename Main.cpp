include<iostream>
#include calculator.h"
using namespace std;

int main(){
char op;
int a;
int b;

cout<<"enter an op(+,-,*,/):";
cin>>op;

cout<<"enter two numbers:";
cin>>a>>b;

switch (op){
  case '+':
    cout<<"sum:"<<add(a+b)<<endl;
    break;

  case '-':
     cout<<"substract:"<<subtract(a-b)<<endl
     break;

  case '*':
    cout<<"multiply:"<<multiplye(a*b)<<endl
    break;

  case '/'
    cout<<"divide:"<<divide(a/b)<<endl
    break;

  default:
    cout<<"invalid value"<<endl;
    break;
}
return 0;
}


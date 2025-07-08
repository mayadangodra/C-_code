#include<iostream>
using namespace std;
namespace math{

int add(int a, int b){
   return a+b;
}
}

int main(){
   using namespace math;
   cout<<"sum:"<<add(5,5)<<endl;
   return 0;
}

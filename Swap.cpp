#include <iostream>
using namespace std;

int main() {
   int a = 4, b = 6, temp;
   temp = a;
   a = b;
   b = temp;
   
   cout << "After swapping: ;
   cout<<"a = "<< a <<endl;
   cout<<"b = "<< b <<endl;
   return 0;
}

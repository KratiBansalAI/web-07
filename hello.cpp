#include <iostream>
using namespace std;

int main() {
   int a=10;
   int b=20;
   int c= a++ + ++b + a++ + ++a;
   cout << c << endl;

    return 0;
}
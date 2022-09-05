#include <iostream>
#include <math.h>
using namespace std;

int main() {
   double a, b, c, p, s;
   cout << "Enter the first side: ";
   cin >> a;
   cout << "Enter the second side: ";
   cin >> b;
   cout << "Enter the third side: ";
   cin >> c;
   p = (a + b + c) / 2;
   s = sqrt(p * (p - a) * (p - b) * (p - c));
   cout << "The area is: " << s;
   return 0;
}
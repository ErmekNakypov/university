#include <iostream>
#include <math.h>
using namespace std;

int main() {
   double a, b, x, y, z;
   cout << "Enter the x: ";
   cin >> x;
   cout << "Enter the y: ";
   cin >> y;
   cout << "Enter the z: ";
   cin >> z;
   a = (sqrt(fabs(x - 1)) - fabs(pow(y, 1/3.))) /
       (1 + (pow(x, 2) / 2) + (pow(y, 2) / 4));

   b = x * (atan(z) + exp(-(x + 3))); 
   cout << "A is equal to: " << a << endl;
   cout << "B is equal to: " << b;     
   return 0;
}
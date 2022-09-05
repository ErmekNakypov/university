#include <iostream>
#include <math.h>
using namespace std;

int main() {
   double a, b, area, angle, radians;
   const double PI = 3.14;
   cout << "Enter the base a: ";
   cin >> a;
   cout << "Enter the base b: ";
   cin >> b;
   cout << "Enter the angle: ";
   cin >> angle;
   radians = angle * (PI / 180); 
   area = (0.5 * (pow(a, 2) - pow(b, 2))) * tan(radians);
   cout << "The area of trapezoid is equal to: " << area;
   return 0;
}
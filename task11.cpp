#include <iostream>
#include <math.h>
using namespace std;

int main() {
   double a, area, height, inner_radius, outer_radius;
   cout << "Enter the side of the equilateral triangle: ";
   cin >> a;
   area = (pow(a, 2) * sqrt(3)) / 4;
   height = (a * sqrt(3)) / 2;
   outer_radius = (sqrt(3) / 3) * a;
   inner_radius = (sqrt(3) / 6) * a;
   cout << "The area is: " << area << endl;
   cout << "The height is: " << height << endl;
   cout << "The outer radius is: " << outer_radius << endl;
   cout << "The inner radius is: " << inner_radius;

   return 0;
}
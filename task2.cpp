#include <iostream>
#include <math.h>
using namespace std;

int main() {
   double radius, diameter, length, area;
   const double PI = 3.14;
   cout << "Enter the radius of circle: ";
   cin >> radius;
   diameter = radius * 2;
   length = 2 * PI * radius;
   area = PI * pow(radius, 2);
   cout << "The diameter of the circle is: " << diameter << endl;
   cout << "The length of the circle is: " << length << endl;
   cout << "The area of the circle is: " << area;
   return 0;
}
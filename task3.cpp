#include <iostream>
#include <math.h>
using namespace std;

int main() {

   double radius1, radius2, area;
   radius1 = 20;
   const double PI = 3.14;
   cout << "Enter the outer radius of the ring: ";
   cin >> radius2;

   if (radius1 >= radius2) {
        area = PI * (pow(radius1, 2) - pow(radius2, 2));
        cout << "The area of the ring is equal to: " << area;
   }

   else cout << "The second radius can not be bigger than first radius!";

   return 0;
}
#include <iostream>
#include <math.h>
using namespace std;

int main() {
   double x1, x2, y1, y2, d;
   cout << "Enter the x1: ";
   cin >> x1;
   cout << "Enter the x2: ";
   cin >> x2;
   cout << "Enter the y1: ";
   cin >> y1;
   cout << "Enter the y2: ";
   cin >> y2;
   d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
   cout << "The distance is equal to: " << d;
   return 0;
}
#include <iostream>
#include <math.h>
using namespace std;

int main() {
   double a, b, hipotenuza, area;
   cout << "Enter the first leg: ";
   cin >> a;
   cout << "Enter the second leg: ";
   cin >> b;
   hipotenuza = sqrt(pow(a, 2) + pow(b, 2));
   area = (a * b) / 2;
   cout << "The hipotenuza of triangle is equal to: " << hipotenuza << endl;
   cout << "The area of triangle is equal to: " << area << endl;
   return 0;
}
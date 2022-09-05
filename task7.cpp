#include <iostream>
#include <math.h>
using namespace std;

int main() {
   int a, b;
   double average, geometric;
   cout << "Enter the first number: ";
   cin >> a;
   cout << "Enter the second number: ";
   cin >> b;
   average = (a + b) / 2.;
   geometric = sqrt(abs(a) * abs(b));
   cout << "The average is: " << average << endl;
   cout << "The geometric mean is: " << geometric;
   return 0;
}
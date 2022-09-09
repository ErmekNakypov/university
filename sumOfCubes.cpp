#include <iostream>
#include <math.h>
using namespace std;

int main() {
   double m, n, k, d;
   cout << "Enter the m: ";
   cin >> m;
   cout << "Enter the n: ";
   cin >> n;
   cout << "Enter the k: ";
   cin >> k;
   d = pow(m, 3) + pow(n, 3) + pow(k, 3);
   cout << "The d is equal to: " << d;
   return 0;
}
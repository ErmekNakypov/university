#include <iostream>
#include <math.h>
using namespace std;

int main() {
   int number;
   cout << "Enter the number: "; 
   cin >> number;
   cout << "Thousands: " << number / 1000 << endl;
   cout << "Hundreds: " << (number % 1000) / 100 << endl;
   cout << "Tens: " << (number % 100) / 10 << endl;
   cout << "Ones: " << number % 10;
   return 0;
}
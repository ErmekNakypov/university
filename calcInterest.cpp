#include <iostream>
using namespace std;

int main() {
   int amount, years, rate;
   double interest;
   cout << "Enter the amount: ";
   cin >> amount;
   cout << "Enter the years: ";
   cin >> years;
   cout << "Enter the rate: ";
   cin >> rate;
   interest = amount * years * rate / 100.0;
   cout << "The interest is: " << interest;
   return 0;
}
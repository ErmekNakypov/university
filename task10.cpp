#include <iostream>
#include <math.h>
using namespace std;

int main() {
   double len, volume, total_area, face_area;
   cout << "Enter the edge length of cube: ";
   cin >> len;
   volume = pow(len, 3);
   total_area = 6 * pow(len, 2);
   face_area = 4 * pow(len, 2);
   cout << "The volume is: " << volume << endl;
   cout << "The total area is: " << total_area << endl;
   cout << "The face area is: " << face_area;
   return 0;
}
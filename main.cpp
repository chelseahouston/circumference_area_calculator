#include <iostream>
using namespace std;

int main() {

  double diameter, d, radius, r, circumference, c, a; // -- declare all var as double | account for decimals

  // task 01 --- decalre constant pi | calculate circumference with diameter of 6
  const double pi = 3.14159265359;
  diameter = 6;
  radius = diameter / 2; // calculate radius
  circumference = 2 * pi * radius; // calculate circumference
  cout << "The circumference of a circle with a diameter of 6 is " << circumference; // output circumference

  // task 02 --- user input diameter | calculate circumference and area
  cout << "\n\nPlease enter the diameter of a circle to work out the circumference and area: ";
  cin >> d; //user input diameter (d)
  r = d/ 2; // calculate radius (r)
  c = 2 * pi * r; // calculate circumference (c)
  a = pi * (r * r); // calculate area (a)
  cout << "The circumference of a circle with a diameter of " << d << " is "<< c; // output circumference
  cout << "\nThe area of a circle with a diameter of " << d << " is " << a; // output area

  // bit of fun task ---
  cout << "\n\n            C";
  cout << "\n          i   i";
  cout << "\n        s       s";
  cout << "\n      b           b";
  cout << "\n    e               e";
  cout << "\n  s                   s";
  cout << "\nt s e b s i C i s b e s t";

  return 0;

}
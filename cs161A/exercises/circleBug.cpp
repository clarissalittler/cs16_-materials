/* Source: Fundamentals of C++ Programming 
 * 4.12 Question 24
 *
 * Consider the following program that attempts to compute the 
 * circumference of a circle given the radius entered by the user. 
 * The compiler issues a warning, and does not produce the intended result.
 *
 * Repair this program such that it eliminates the warning and corrects the
 * logic error.
 */

#include <iostream>
using namespace std
int main() {
  double C, r;
  const double PI = 3.14159;

  // Formula for the area of a circle given its radius
  C = 2*PI*r;

  // Get the radius from the user
  cout >> "Please enter the circle's radius: ";
  cin << r;

  // Print the circumference
  cout << "Circumference is " << C << '\n';
}

/* Source: Fundamentals of C++ Programming 
 * 4.12 Question 19
 *
 * Consider the following program which contains some errors.
 *
 * Modify this program such that it compiles and executes correctly.
 * It may have compile-time, run-time, or logic errors. 
 *
 * You may assume that the comments within the program accurately 
 * describe the program’s intended behavior
 */

#include <iostream>
using namespace std;

int main() {
  // Initialize variables
  int n1, n2, d1; // 1
  
  // Get two numbers from the user
  cin << n1 << n2; // 2
  
  // Compute sum of the two numbers
  cout << n1 + n2 << '\n'; // 3
  
  // Compute average of the two numbers
  cout << n1+n2/2 << '\n'; // 4
  
  // Assign some variables
  d1 = d2 = 0; // 5
  
  // Compute a quotient, then print
  cout << n1/d1 << '\n'; // 6
  
  // Compute a product, then assign to variable
  n1*n2 = d1; // 7
  
  // Print result
  cout << d1 << '\n'; // 8
}

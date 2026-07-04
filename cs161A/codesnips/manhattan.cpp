#include <iostream>
#include <cmath>
using namespace std;

double manhattanDistance(double x1, double y1, double x2, double y2){
  return abs(x2 - x1) + abs(y2 - y1);
}

int main(){
  double x1, y1, x2, y2;

  cout << "Enter first point (x y): ";
  cin >> x1 >> y1;

  cout << "Enter second point (x y): ";
  cin >> x2 >> y2;

  double euclidean = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
  double manhattan = manhattanDistance(x1, y1, x2, y2);

  cout << "Euclidean distance: " << euclidean << endl;
  cout << "Manhattan distance: " << manhattan << endl;

  return 0;
}

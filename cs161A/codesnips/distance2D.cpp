#include <iostream>
#include <cmath>
using namespace std;

double distance2D(double x1, double y1, double x2, double y2){
  double dx = x2 - x1;
  double dy = y2 - y1;
  return sqrt(dx * dx + dy * dy);
}

int main(){
  double x1, y1, x2, y2;

  cout << "Enter first point (x y): ";
  cin >> x1 >> y1;

  cout << "Enter second point (x y): ";
  cin >> x2 >> y2;

  double dist = distance2D(x1, y1, x2, y2);
  cout << "Distance: " << dist << endl;

  return 0;
}

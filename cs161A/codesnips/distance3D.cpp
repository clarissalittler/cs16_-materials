#include <iostream>
#include <cmath>
using namespace std;

double distance3D(double x1, double y1, double z1, double x2, double y2, double z2){
  double dx = x2 - x1;
  double dy = y2 - y1;
  double dz = z2 - z1;
  return sqrt(dx * dx + dy * dy + dz * dz);
}

int main(){
  double x1, y1, z1, x2, y2, z2;

  cout << "Enter first point (x y z): ";
  cin >> x1 >> y1 >> z1;

  cout << "Enter second point (x y z): ";
  cin >> x2 >> y2 >> z2;

  double dist = distance3D(x1, y1, z1, x2, y2, z2);
  cout << "Distance: " << dist << endl;

  return 0;
}

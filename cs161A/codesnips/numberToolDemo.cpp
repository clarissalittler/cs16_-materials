#include <iostream>
using namespace std;

int gcd(int a, int b){
  while(b != 0){
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int lcm(int a, int b){
  if(a == 0 && b == 0){
    return 0; // gcd(0,0) is 0, and dividing by it would crash
  }
  return (a / gcd(a, b)) * b;
}

int fibonacci(int n){
  if(n <= 1){
    return n;
  }

  int a = 0;
  int b = 1;
  for(int i = 2; i <= n; i++){
    int temp = a + b;
    a = b;
    b = temp;
  }

  return b;
}

int main(){
  int a;
  int b;
  int n;

  cout << "Enter two integers: ";
  cin >> a >> b;
  cout << "GCD: " << gcd(a, b) << endl;
  cout << "LCM: " << lcm(a, b) << endl;

  cout << "Enter n for Fibonacci: ";
  cin >> n;
  cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;

  return 0;
}

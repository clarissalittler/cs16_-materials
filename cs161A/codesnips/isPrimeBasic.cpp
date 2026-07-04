#include <iostream>
using namespace std;

bool isPrime(int n){
  // Numbers less than 2 are not prime
  if(n < 2){
    return false;
  }

  // Check if n is divisible by any number from 2 to n-1
  for(int i = 2; i < n; i++){
    if(n % i == 0){
      return false;  // Found a divisor, not prime!
    }
  }

  return true;  // No divisors found, it's prime!
}

int main(){
  int num;

  cout << "Enter a number: ";
  cin >> num;

  if(isPrime(num)){
    cout << num << " is prime!" << endl;
  }
  else{
    cout << num << " is not prime." << endl;
  }

  return 0;
}

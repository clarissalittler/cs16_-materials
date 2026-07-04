#include <iostream>
using namespace std;

int dynLength(int arr[]){
  int i=0;
  while(arr[i] != -1){
    i++;
  }
  return i;
}

int main(){

  int arr[] = {1,2,3,4,-1};

  cout << dynLength(arr) << endl;
  
  return 0;
}

#include <iostream>
using namespace std;

int dynLength(int arr[]){
  int i=0;
  while(arr[i] != -1){
    i++;
  }
  return i;
}

void doubleArray(int arr[]){
  for(int i=0;i<dynLength(arr);i++){
    arr[i] = 2*arr[i];
  }
}

void printArray(int arr[]){
  cout << "[";
  for(int i=0; i<dynLength(arr); i++){
    if( i > 0){
      cout << ", ";
    }
    cout << arr[i];
  }
  cout << "]";
  cout << endl;
}

int main(){

  int arr[] = {1,2,3,4,-1};
  
  doubleArray(arr);
  printArray(arr);

  return 0;
}

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
  for(int i = 0; i < size; i++){
    if(arr[i] == target){
      return i;
    }
  }
  return -1;
}

int main(){
  int values[6] = {4, 8, 15, 16, 23, 42};
  int location = linearSearch(values, 6, 15);

  if(location == -1){
    cout << "Not found" << endl;
  }
  else{
    cout << "Found at index " << location << endl;
  }

  return 0;
}

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
  int left = 0;
  int right = size - 1;

  while(left <= right){
    int mid = left + (right - left) / 2;

    if(arr[mid] == target){
      return mid;
    }
    else if(arr[mid] < target){
      left = mid + 1;
    }
    else{
      right = mid - 1;
    }
  }

  return -1;
}

int main(){
  int values[8] = {3, 7, 12, 18, 25, 31, 44, 50};
  int location = binarySearch(values, 8, 25);

  if(location == -1){
    cout << "Not found" << endl;
  }
  else{
    cout << "Found at index " << location << endl;
  }

  return 0;
}

#include <iostream>
using namespace std;

void selectionSort(int arr[], int size){
  for(int i = 0; i < size - 1; i++){
    int minIndex = i;

    for(int j = i + 1; j < size; j++){
      if(arr[j] < arr[minIndex]){
        minIndex = j;
      }
    }

    int temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
  }
}

int main(){
  int values[6] = {8, 3, 5, 1, 9, 2};

  selectionSort(values, 6);

  for(int i = 0; i < 6; i++){
    cout << values[i] << " ";
  }
  cout << endl;

  return 0;
}

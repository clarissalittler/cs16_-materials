#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  srand(time(0));

  const int NUM_ROLLS = 100;
  int sumCounts[13] = {0};  // We'll use indices 2-12

  for(int i = 0; i < NUM_ROLLS; i++){
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    int sum = die1 + die2;

    sumCounts[sum]++;
  }

  int mostCommon = 2;
  int leastCommon = 2;

  for(int sum = 2; sum <= 12; sum++){
    cout << "Sum " << sum << ": " << sumCounts[sum] << endl;

    if(sumCounts[sum] > sumCounts[mostCommon]){
      mostCommon = sum;
    }

    if(sumCounts[sum] < sumCounts[leastCommon]){
      leastCommon = sum;
    }
  }

  cout << fixed << setprecision(2);
  cout << "Most common sum: " << mostCommon << endl;
  cout << "Least common sum: " << leastCommon << endl;
  cout << "Percentage of 7s: " << (sumCounts[7] * 100.0 / NUM_ROLLS) << "%" << endl;

  return 0;
}

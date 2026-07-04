#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  srand(time(0));

  const int NUM_ROLLS = 100;
  const int NUM_SIDES = 6;

  // Array to count each outcome (1-6)
  // We use index 0 for nothing, indices 1-6 for the die faces
  int counts[NUM_SIDES + 1] = {0};  // Initialize all to 0

  // Roll the die NUM_ROLLS times
  for(int i = 0; i < NUM_ROLLS; i++){
    int roll = rand() % NUM_SIDES + 1;  // Random 1-6
    counts[roll]++;  // Increment the counter for this roll
  }

  // Display the results
  cout << "Results from " << NUM_ROLLS << " rolls:" << endl;
  for(int face = 1; face <= NUM_SIDES; face++){
    cout << "Rolled " << face << ": " << counts[face] << " times" << endl;
  }

  return 0;
}

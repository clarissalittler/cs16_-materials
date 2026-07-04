#include <iostream>
using namespace std;

int dynLength(char arr[]){
  int i=0;
  while(arr[i] != '\0'){
    i++;
  }
  return i;
}

void concat(char c1[], char c2[]){
  // this function is going to attach c2 to the end of c1
  int i = 0;
  // first we need to make our index point to the end of string one, which means we need to find
  // the first \0 in the string
  while(c1[i] != '\0'){
    i++;
  }
  // now i is pointing to the end
  // alternatively, we could have just used a call to dynLength
  // can you see why that works??
  // so the next thing we need is the length of the second string
  int length2 = dynLength(c2);
  // now we need to write a for loop that goes from 0 to length2 and copies characters over from c2 to c1
  for(int j=0; j<length2; j++){
    c1[j+i] = c2[j];
  }
  // now we're *not* done because we also need to make sure we put a \0 at the new end of the string
  c1[length2+i] = '\0';
}

int main(){
  char hello[20] = "Hello";
  char world[] = ", World!";

  concat(hello,world);

  cout << hello << endl;

  return 0;
}

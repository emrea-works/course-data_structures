// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
  // Write C++ code here

  int zvals[9];

  zvals[0] = 3;
  zvals[1] = 4;
  zvals[2] = 8;
  zvals[3] = 7;

  cout << *(zvals+2) << endl;
  cout << *zvals << endl;

  int *yvals = (int *) malloc(10 * sizeof(int));

  yvals[2] = 7;

  cout << *(yvals+2) << endl;

  return 0;
}

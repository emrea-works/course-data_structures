// Online C++ compiler to run C++ program online
// #include "Vector.h"
#include <vector>
#include <iostream>
using namespace std;

const int  NUM_INTS = 100;

int main() {
    // Vector<int> myVector;
    vector<int> myVector;
    for (int i = 0; i < NUM_INTS; i++)
        // myVector.add(i);
        myVector.push_back(i);

    for (int i = 0; i < myVector.size(); i++)
        cout << myVector[i] << endl;

    return 0;
}

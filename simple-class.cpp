#include <iostream>
using namespace std;

class Triangle {

public:
  float width;
  float height;

  float area() { return ((width * height) / 2); }
};

int main() {

  Triangle myTriangle;

  myTriangle.width = 5; // member access using the .dot operator
  myTriangle.height = 6;
  cout << "Triangle area: " << myTriangle.area() << endl;
  return 0;
}

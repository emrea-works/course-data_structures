#include <iostream>
#include <string>
using namespace std;

class MyClass {
	private:
	  string first, second;

	public:
	  void set(string, string);
	  string getFirst();
	  string getSecond();
}

void MyClass::set(string x, string y) {
  first = x;
  second = y;
}

string MyClass::getFirst() { return first; }

string MyClass::getSecond() { return second; }

int main() {

  MyClass objectA;

  objectA.set("Hello, ", "World!");

  cout << objectA.getFirst() << objectA.getSecond() << endl;

  return 0;
}

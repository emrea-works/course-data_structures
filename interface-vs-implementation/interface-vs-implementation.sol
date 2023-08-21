// Work In Progress!

// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

contract MyClass {

  string private first;
  string private second;

  constructor(){
    first = "";
    second = "";
  }

	function set(string memory f, string memory s) public {
		first = f;
		second = s;
	}

	function getFirst() public view returns(string memory) {
		return first;
	}

	function getSecond() public view returns(string memory) {
		return second;
	}
}

contract InterfaceVSImplementation {

  MyClass objectA = new MyClass();

  constructor () {
		main();
  }

	function main() private returns(string memory) {
		objectA.set("Hello, ", "World!");
		return objectA.getFirst() + objectA.getFirst();
  }
}

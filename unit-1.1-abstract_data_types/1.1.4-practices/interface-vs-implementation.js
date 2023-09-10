// chatGPT 3.5 fixed
class MyClass {

	constructor() {
		this.first = "";
		this.second = "";
	}

	set(f, s){
		this.first = f;
		this.second = s;
	}

	getFirst() {
		return this.first;
	}

	getSecond() {
		return this.second;
	}
}


function main() {

	const objectA = new MyClass();

	objectA.set("Hello, ", "World!");

	console.log( objectA.getFirst() + objectA.getSecond(), "\n" )

	return null;
}

main();

class MyClass {

	this.first = "";
	this.second = "";

	this.set: function(f, s){
		f = first;
		s = second;
	}

	this.getFirst: function(){
		return first;
	}

	this.getSecond: function(){
		return second;
	}
}


function main() {

	console.log(typeof MyClass);

	const objectA = new MyClass();

	console.log(typeof objectA);

	//
	// objectA.set("Hello, ", "World!");
	//
	// console.log( objectA.getFirst(), objecatA.getSecond(), "\n" )
	//
	return null;
}

main();

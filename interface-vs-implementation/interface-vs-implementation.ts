class MyClass {
  private first: string;
  private second: string;

  constructor() {
    this.first = "";
    this.second = "";
  }

  public set(f: string, s: string): void {
    this.first = f;
    this.second = s;
  }

  public getFirst(): string {
    return this.first;
  }

  public getSecond(): string {
    return this.second;
  }
}

function main() {

  const objectA: MyClass = new MyClass();

  objectA.set("Hello, ", "World!");

  console.log(objectA.getFirst() + objectA.getSecond());

  return null;
}

main();

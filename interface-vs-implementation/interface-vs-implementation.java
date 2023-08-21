public class MyClass {
  private String first, second;

  public void set(String x, String y) {
    first = x;
    second = y;
  }

  public String getFirst() {
    return first;
  }

  public String getSecond() {
    return second;
  }

  public static void main(String[] args) {
    MyClass objectA = new MyClass();

    objectA.set("Hello, ", "World!");

    System.out.println(objectA.getFirst() + objectA.getSecond());
  }
}

struct MyClass {
  first: String,
  second: String,
}

impl MyClass {
  fn set(&mut self, f: String, s: String) {
    self.first = f;
    self.second = s;
  }

  fn get_first(&self) -> &str {
    &self.first
  }

  fn get_second(&self) -> &str {
    &self.second
  }
}

fn main() {
  let mut object_a = MyClass {
    first: String::new(),
    second: String::new(),
  };

  object_a.set(String::from("Hello, "), String::from("World!"));

  println!("{}{}", object_a.get_first(), object_a.get_second());
}

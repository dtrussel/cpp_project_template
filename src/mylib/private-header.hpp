#pragma once

namespace mylib {

struct MyPrivateClass {
  MyPrivateClass(int data) : data_(data) {}
  int calculate(int input) { return input + data_; }
private:
  int data_ = 42;
};

} // namespace mylib

#pragma once

#include <thread>

namespace mylib {

struct MyClass {
  MyClass(int data): data_(data) {}

  int give_the_answer(int input);

private:
  int data_ = 42;
  std::thread task_{};

};

} // namespace mylib

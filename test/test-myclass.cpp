#include "mylib/public-header.hpp"

#include <gtest/gtest.h>

TEST(MyClass, calculate) {
  mylib::MyClass instance(9);
  ASSERT_EQ(42, instance.give_the_answer(33));
}

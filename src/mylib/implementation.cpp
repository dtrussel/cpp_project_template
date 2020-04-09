#include "mylib/private-header.hpp"
#include "mylib/public-header.hpp"

#include <boost/circular_buffer.hpp>

int mylib::MyClass::give_the_answer(int input){
  MyPrivateClass helper(data_);
  return helper.calculate(input);
}

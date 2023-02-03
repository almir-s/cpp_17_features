#ifndef FIRST_CLASS_HPP
#define FIRST_CLASS_HPP

#include <string>

inline std::string data{"global inline variable"};
class FirstClass {
  public:
  std::string getA();
};
#endif

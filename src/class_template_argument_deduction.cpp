#include <iostream>

template <typename T>
class A {
  public:
  A(T t) : firstProperty{t} {
    std::cout << "First Property: " << firstProperty << std::endl;
  };

  private:
  T firstProperty;
};

void f(std::pair<int, char> arg) {
  std::cout << arg.first << std::endl;
  std::cout << arg.second << std::endl;
}

int main() {
  f(std::pair(42, 'z'));       // This would not be possible earlier!
  f(std::make_pair(42, 'z'));  // It had to be done this way

  std::cout << "=======" << std::endl;
  A<int>(5);  // Prior C++ 17
  A(10);      // Possible from C++ 17 !
  return 0;
}

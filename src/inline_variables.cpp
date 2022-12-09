#include <iostream>
#include <include/first_class.hpp>

int main() {
    FirstClass first;
    std::string data{"Main data"};  // This is not a problem due to 'inlining'
                                    // data variable in first_class.hpp.
                                    // Otherwise this would not be allowed
    std::cout << first.getA() << std::endl;
    return 0;
}

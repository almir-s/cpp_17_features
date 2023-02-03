#include <iostream>

int main() {
    constexpr int val = 9;
    constexpr auto add = [](int a, int b) constexpr { return a + b + val; };
    int result = add(1, 2);
    std::cout << result << std::endl;
    return 0;
}

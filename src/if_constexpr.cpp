#include <iostream>

constexpr int choose() {
    constexpr bool condition = false;
    static_assert(123 > 42, "Error");
    if constexpr (condition) {
        return 42;
    } else {
        return 123;
    }
}

// if constexpr with template version
template <typename T>
void printValue(const T& value) {
    if constexpr (std::is_same_v<T, int>) {
        std::cout << "Integer: " << value << std::endl;
    } else if constexpr (std::is_same_v<T, double>) {
        std::cout << "Double: " << value << std::endl;
    } else if constexpr (std::is_same_v<T, char>) {
        std::cout << "Character: " << value << std::endl;
    } else {
        std::cout << "Unsupported type " << std::endl;
    }
}

int main() {
    constexpr auto value = choose();
    std::cout << value << '\n';
    printValue(42);
    printValue(3.14);
    printValue('A');
}


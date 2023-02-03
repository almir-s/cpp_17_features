#include <iostream>

template <typename... T>
auto sum(T... args) {
    return (... + args);
}

template <typename... T>
struct Range {
    std::common_type_t<T...> min, max;
    Range(T... args) : min(std::min({args...})), max(std::max({args...})) {
        std::cout << "Min: " << min << " Max: " << max << std::endl;
    }
};

int main() {
    std::cout << "Sum: " << sum(10, 12, 13, 14, 15) << std::endl;
    Range(12, 12, 0, 13, 67);
    return 0;
}

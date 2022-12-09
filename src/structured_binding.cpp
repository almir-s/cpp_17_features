#include <iostream>
#include <tuple>

struct S {
    int x1;
    volatile double y1;
};

S foo() { return S{10, 2.3}; }

int main() {
    // structured binding (binding tuple-like)
    std::tuple<int, double, char> t(1, 2.5, 'a');
    auto [x, y, z] = t;
    std::cout << x << ' ' << y << ' ' << z << std::endl;

    // binding an array
    int a[2] = {1, 2};
    auto [i, j] = a;  // creates e[2], copies a into e,
    auto& [ir, jr] = a;

    std::cout << i << ' ' << j << std::endl;
    std::cout << ir << ' ' << jr << std::endl;

    // binding to data members
    const auto [f, g] = foo();
    std::cout << f << ' ' << g << std::endl;

    return 0;
}

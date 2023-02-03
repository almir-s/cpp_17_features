#include <iostream>

struct MyObj {
    int value{123};
    auto getValueCopy() {
        return [*this] { return value; };
    }
    auto getValueRef() {
        return [this] { return value; };
    }
};

int main() {
    MyObj mo;
    auto valueCopy = mo.getValueCopy();
    auto valueRef = mo.getValueRef();
    mo.value = 321;
    std::cout << valueCopy() << std::endl;  // 123
    std::cout << valueRef() << std::endl;   // 321
    valueRef();
    return 0;
}

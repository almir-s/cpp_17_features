#include <iostream>

int main() {
    // Declare and initialize the variable x
    if (int x = 5; x > 0) {
        std::cout << x << std::endl;
    }

    int x = 10;
    switch (int a = 10 - x; a) {
        case 0:
            std::cout << "0" << std::endl;
            break;
        case 1:
            std::cout << "1" << std::endl;
            break;
        default:
            std::cout << "Something else" << std::endl;
    }
    return 0;
}


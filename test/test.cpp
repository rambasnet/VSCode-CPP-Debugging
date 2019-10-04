#include <iostream>

int main() {
    int b = 20;
    int c;
    std::cout << "enter an int: ";
    std::cin >> c;
    int diff = b - c;
    std::cout << "ans = " << diff << std::endl;
    return 0;
}
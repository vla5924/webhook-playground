#include <iostream>
#include <chrono>

void g() {
    std::cout << "G" << std::endl;
}

void f() {
    std::cout << "F" << std::endl;
}

int main() {
    g();
    std::cout << "Hello world!" << std::endl;
}

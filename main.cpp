#include <iostream>
#include <chrono>

void g() {
    std::cout << "G" << std::endl;
}

void f() {
    std::cout << "F12345" << std::endl;
}

int main() {
    g();
    std::cout << "Hello world!" << std::endl;
}

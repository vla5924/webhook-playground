#include <iostream>
#include <chrono>

void g() {
    std::cout << "G" << std::endl;
}

int main() {
    g();
    std::cout << "Hello world!" << std::endl;
}


#include <iostream>

const char* test() { return "hello, world"; }

int main() {
    std::cout << test() << std::endl;
    return 0;
}
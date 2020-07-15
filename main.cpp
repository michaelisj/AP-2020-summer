#include <cstdint>
#include <iostream>


std::uint64_t fibonacci_number(const std::uint16_t index)
{
    if (index == 0 || index == 1) {
        return 1;
    }

    return fibonacci_number(index - 1) + fibonacci_number(index - 2);
}

int main(int, char**) {
    std::cout << "Hello, world!\n";

    std::cout << "Using an automatic build now!\n";
    std::cout << "The tenth fibonacci number is: " << fibonacci_number(10) << std::endl;

    return 0;
}

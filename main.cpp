#include <cstdint>
#include <iostream>


void say_hello()
{
    std::cout << "Hello, World!\n" << std::endl;
}

std::uint64_t fibonacci_number(const std::uint16_t index)
{
    if (index == 0 || index == 1) {
        return 1;
    }

    return fibonacci_number(index - 1) + fibonacci_number(index - 2);
}

int main(int, char**) {
    say_hello();
    std::cout << "The tenth fibonacci number is: " << fibonacci_number(10) << std::endl;

    return 0;
}

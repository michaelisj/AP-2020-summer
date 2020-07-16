#include <cstdint>
#include <iostream>

#include "Utilities/Utilities.hpp"



int main(int, char**) {
    constexpr auto me = "Michael";

    char array[10];
    example::utilities::copy_string(array, me);

    std::cout << array << std::endl;

    return 0;
}

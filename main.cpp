#include <cstdint>
#include <iostream>
#include <filesystem>

#include <unistd.h>

#include "Utilities/Utilities.hpp"
#include "Utilities/Traits.hpp"



int main(int, char**) {
    const auto path = std::filesystem::absolute(".");

    std::cout << "Current path is: " << path.string() << std::endl;
    constexpr auto me = "Roey";

    char array[10];
    example::utilities::copy_string(array, me);

    std::cout << "Number of tests: " << NUMBER_OF_TESTS << std::endl;

    const pid_t childId = fork();
    if (childId == 0) {
        std::cout << "In child!" << std::endl;
    } else {
        std::cout << "In parent!" << std::endl;
    }

    std::cout << array << std::endl;

    return 0;
}

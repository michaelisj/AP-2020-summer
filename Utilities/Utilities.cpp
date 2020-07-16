#include "Utilities.hpp"


namespace example::utilities {

void copy_string(char* target, const char* source)
{
    while (*source) {
        *target++ = *source++;
    }

    *target = '\0';
}

}
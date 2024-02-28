#include <stdio.h>

#include "scanner.hpp"

int main(int args, char **argv)
{
    SomeClass name;
    name.x = 1;
    printf("Hello, %d!\n", name.x);
    return 0;
}

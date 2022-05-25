#include <stdio.h>
#include "helper.h"

int main(int argc, const char * argv[])
{
    const int value = get_fun_int();
    printf("%s\n%s\n%d\n", "hello world", argv[0], value);
    return 0;
}
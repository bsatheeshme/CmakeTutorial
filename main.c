#include <stdio.h>
#include "statLib.h"
#include "dynLib.h"
void main()
{
#ifdef DEBUG
printf("[DEBUG]: CMake Tutorial#1\n");
#else
printf("CMake Tutorial#1\n");
#endif
statLib();
dynLib();
}

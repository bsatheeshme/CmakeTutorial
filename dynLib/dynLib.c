#include <stdio.h>
void dynLib()
{
#ifdef DEBUG
printf("[DEBUG]: dynLib#1\n");
#else
printf("dynLib#1\n");
#endif
}

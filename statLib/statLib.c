#include <stdio.h>
void statLib()
{
#ifdef DEBUG
printf("[DEBUG]: StatLib#1\n");
#else
printf("StatLib#1\n");
#endif
}

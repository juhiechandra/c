#include <stdio.h>
#define __STDC__ ()
int main()
{
    printf("Program Compilation Date: %s\n",
           __DATE__);
    printf("File name of this"
           " program is: %s\n",
           __FILE__);
    printf("Line number is: %d\n",
           __LINE__);
    printf("Time of compilation is: %s\n",
           __TIME__);

    return 0;
}

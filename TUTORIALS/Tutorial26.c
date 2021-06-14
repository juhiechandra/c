Understanding pointers

#include <stdio.h>
int main()
{
    printf("Lets learn pointers\n");
    int a = 56;
    int *ptra = &a;
    printf("The value of a is %x \n", ptra);
    
    return 0;
}

// #include <stdio.h>

// int main()
// {
    
//     int var = 24; // actual variable declaration
//     int *p;

//     p = &var; // storing address of int variable var in pointer p

//     printf("\n\nAddress of var variable is: %x \n\n", &var);

//     // address stored in pointer variable
//     printf("\n\nAddress stored in pointer variable p is: %x", p);

//     // access the value using the pointer variable
//     printf("\n\nValue of var variable or the value stored at address p is   %d ", *p);

    
//     return 0;
// }


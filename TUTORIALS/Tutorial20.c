#include<stdio.h>

int main(){

    int num, i;
    printf("Printing Multiplication Table\n");
    scanf("%d",&num);
    printf("Multiplication table of %d is:\n", num);

    for ( i = 1; i < 11; i++)
    {
        printf("%d * %d= %d\n", num, i, num * i);
    
    }
    
    return 0;


}
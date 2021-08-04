#include <stdio.h>
struct employee1
{

    int id;
    char name[20];
    long salary;
};
union employee2
{
    int id;
    char name[20];
    long salary;
};

int main()
{
    struct employee1 a;
    union employee2 b;
    printf("The size of structure of Employee 1 is %d\n", sizeof(a));
    printf("The size of union of Employee2 is %d\n", sizeof(b));
    return 0;
}

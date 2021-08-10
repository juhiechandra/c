#include <stdio.h>
struct account
{
    int bal;
    int accno;
    char name[15];
} s[5];
void balancebelow100(struct account s[])
{
    printf("Details of accounts with balance less than 100 are as follows\n");
    printf("Account Number\t\tName\tBalance\n");
    for (int i = 0; i < 5; i++)
    {
        if (s[i].bal < 100)
        {
            printf("%10d\t%10s\t%d\n", s[i].accno, s[i].name, s[i].bal);
        }
    }
}
int main()
{
    printf("Enter details of Account Holders\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name of %dth account holder\n", i + 1);
        fflush(stdin);
        scanf("%[^\n]s", s[i].name);
        printf("Enter account number\n");
        scanf("%d", &s[i].accno);
        printf("Enter balance\n");
        scanf("%d", &s[i].bal);
    }
    balancebelow100(s);
    printf("Enter 1 for deposit and 0 for withdrawal\n");
    int k;
    int l, p;
    scanf("%d", &k);
    if (k == 0)
    {
        printf("Enter account number\n");
        scanf("%d", &l);
        for (int i = 0; i < 5; i++)
        {
            if (s[i].accno == l)
            {
                printf("Enter amount of withdrawal\n");
                scanf("%d", &p);
                if (p > s[i].bal)
                {
                    printf("Insufficient Balance\n");
                    break;
                }
                else
                {
                    printf("Updated Records is : \n");
                    printf("Account Number\t\tName\tBalance\n");
                    printf("%10d\t%10s\t%d\n", s[i].accno, s[i].name, s[i].bal - p);
                    break;
                }
            }
        }
    }
    else if (k == 1)
    {
        printf("Enter Account Number\n");
        scanf("%d", &l);
        printf("Enter amount to deposit\n");
        scanf("%d", &p);
        for (int i = 0; i < 5; i++)
        {
            if (s[i].accno == l)
            {
                printf("Updated records are\n");
                printf("Account Number\t\tName\tBalance\n");
                printf("%10d\t%10s\t%d\n", s[i].accno, s[i].name, s[i].bal + p);
                break;
            }
        }
    }

    return 0;
}

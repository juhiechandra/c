#include <stdio.h>
#include <string.h>
struct library
{
    int access_num;
    char title[30];
    char author[30];
    int price;
    int flag;

} s[10];
int main()
{
    int k, j = 0, acc;

    do
    {
        printf("The menu options are as follows\n");
        printf("Enter 1 to add new book information\n");
        printf("Enter 2 to display book information\n");
        printf("Enter 3 to List the count of books in library\n");
        printf("Enter 4 to list all the books of a particular author\n");
        printf("Enter 5 to exit\n");
        scanf("%d", &k);
        switch (k)
        {
        case 1:
            printf("Enter book's title\n");
            fflush(stdin);
            scanf("%[^\n]s", &s[j].title);
            printf("Enter books Accession Number\n");
            scanf("%d", &s[j].access_num);
            printf("Enter Author's Name\n");
            fflush(stdin);
            scanf("%[^\n]s", &s[j].author);
            printf("Enter price of Book\n");
            scanf("%d", &s[j].price);
            printf("Enter 1 if it's issued and 0 if it's not\n");
            scanf("%d", &s[j].flag);
            j++;
            break;
        case 2:
            printf("Enter the Accession Number of book to display its information\n");
            scanf("%d", &acc);
            for (int i = 0; i < j; i++)
            {
                if (acc = s[i].access_num)
                {
                    printf("The details of book are as follows\n");
                    printf("Accession Number: %d\n", s[i].access_num);
                    printf("Title of book is %s\n", s[i].title);
                    printf("Author of book is %s\n", s[i].author);
                    printf("Price of book is %d\n", s[i].price);
                    if (s[i].flag == 1)
                        printf("The book is already issued\n");
                    else
                        printf("The book can be issued\n");
                }
            }
            break;
        case 3:
            printf("Books currently available in Library are as follows\n");
            printf("Acc Number\tTitle\t\tAuthor\t\tPrice\tFlag\n");
            for (int i = 0; i < j; i++)
            {
                printf("%d\t\t%10s\t%10s\t%d\t%d", s[i].access_num, s[i].title, s[i].author, s[i].price, s[i].flag);
                printf("\n");
            }
            break;
        case 4:
            printf("Enter the author's name to find its books\n");
            char str[15];
            fflush(stdin);
            scanf("%[^\n]s", &str);
            printf("Acc Number\tTitle\t\tAuthor\t\tPrice\tFlag\n");
            for (int i = 0; i < j; i++)
            {
                if (strcmp(str, s[i].author) == 0)
                {

                    printf("%d\t\t%10s\t%10s\t%d\t%d\n", s[i].access_num, s[i].title, s[i].author, s[i].price, s[i].flag);
                }
            }
            break;
        case 5:
            printf("EXIT\n");
            break;

        default:
            printf("Please Enter Correct Response\n");
            break;
        }

    } while (k != 5);

    return 0;
}

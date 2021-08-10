// <3>Print all odd number and summation of all odd numbers up to n (hint-:loop and if else).

    // #include <stdio.h>
    // int main()
    // {
    //     int N;
    //     char A;
    
    //     printf("Enter the value of N:\n\n");
    //     scanf("%d", &N);
    //     printf("For %d value of N, the sum is:", A);
    //     A = (N * (N + 1))/ 2;
    //     return 0;
    // }

    #include<stdio.h>
    int main(){
        int Limit, sum, i;
        printf("Enter upper limit:");
        scanf("%d", &Limit);

        for ( i = 1; i<=Limit; i++)
        {
           printf("the sum is %d",sum);
           sum += i;
        }
        return 0;
        
    }


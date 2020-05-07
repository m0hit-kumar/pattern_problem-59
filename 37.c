#include <stdio.h>

int main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);

    // k represents the current integer
    k = 1;

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            // Print 1 if current integer k is odd
            if(k % 2 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }

            k++;
        }

        printf("\n");
    }

    return 0;
}

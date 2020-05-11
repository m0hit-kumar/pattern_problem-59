#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Prints the first part of pattern
        for(j=1; j<=(i*2)-1; j+=2)
        {
            printf("%d", j);
        }

        // Prints the second part of pattern
        for(j=(i-1)*2-1; j>=1; j-=2)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

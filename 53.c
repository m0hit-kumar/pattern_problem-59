#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i <= (N/2))
            {
                printf("%d", i);
            }
            else
            {
                printf("%d", (N - i + 1));
            }
        }

        printf("\n");
    }

    return 0;
}

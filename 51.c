#include <stdio.h>

int main()
{
    int i, j, count, value, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    count = 0;

    for(i=1; i<=N; i++)
    {
        // Starting value of column based on even or odd row.
        value = (i & 1) ? (count + 1) : (count + i);

        for(j=1; j<=i; j++)
        {
            printf("%-3d", value);

            // Increment the value for odd rows
            if(i & 1)
                value++;
            else
                value--;

            count++;
        }

        printf("\n");
    }

    return 0;
}

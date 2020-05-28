Skip to content
Search for:
Number pattern 49 in C
October 13, 2016PankajC programmingC, Loop, Number Patterns, Program

Write a C program to print the given number pattern using loop. How to print the given number pattern using for loop in C programming. Logic to print the given number pattern using C program.

Example

Input

Input N: 5
Output

1
12
123
1234
12345
1234
123
12
1    1
   12
  123
 1234
12345
 1234
  123
   12
    1

Required knowledge
Basic C programming, Loop

Logic to print the given number pattern 1

 
1
12
123
1234
12345
1234
123
12
1


These types of patterns are basically a combination of two or more number patterns. Here if you look carefully then you can easily notice that the given pattern is a combination of two patterns. Hence we can divide the pattern in two parts to make our task easier.
1
12
123
1234
12345
    
   
  
 
 
  
   
    
     
1234
123
12
1
If you are following my previous posts, you might have noticed that these two patterns are explained in my previous post - Ascending order number pattern and descending order number pattern.
I recommend you to go though these two post before you get into this pattern.

Printing these two parts are really simple. Logic to print the first part.


First upper part of the patter consists of N rows (where N is the total number of rows to be printed). Since the pattern is in ascending order hence the outer loop formation to iterate through rows will also be in ascending order i.e. for(i=1; i<=N; i++).
Here each row contains exactly i columns (where i is the current row number). Inner loop formation to iterate through each columns is for(j=1; j<=i; j++). Print the current value of j inside this loop, to get the first part of the pattern.
Logic to print the second part of the pattern.

Second lower part of the pattern consists of N - 1 rows. Run an outer loop to iterate through rows. Since the pattern is in descending order hence we need to run the loop in descending order. Therefore the outer loop formation will be for(i=N-1; j>=1; i--).
Each row contains exactly i number of columns. Hence the inner loop formation to print columns will be for(j=1; j<=i; j++). To get the desired pattern print the current value of j inside this loop.
Lets, now combine the logic of both the parts in a single program.

Program to print the given number pattern 1
/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    // Prints upper part of the pattern
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    // Print lower part of the pattern
    for(i=N-1; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

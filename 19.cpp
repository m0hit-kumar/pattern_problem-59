#include <iostream.h>

#define size 10
int main()
{
	int i, j, N;
	int patterns[size][size];
	int left, top;

	left = 0;
	top = size - 1;
	N = 1;

	for (i = 1; i <= size / 2; i++, left++, top--)
	{
		for (j = left; j <= top; j++, N++)
		{
			patterns[left][j] = N;
		}

		for (j = left + 1; j <= top; j++, N++)
		{
			patterns[j][top] = N;
		}

		for (j = top - 1; j >= left; j--, N++)
		{
			patterns[top][j] = N;
		}

		for (j = top - 1; j >= left + 1; j--, N++)
		{
			patterns[j][left] = N;
		}
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			cout << patterns[i][j];
		}
		cout << "\n";
	}

	return 0;
}

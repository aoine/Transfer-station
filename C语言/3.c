#include <stdio.h>
int main()
{
	int a,b, i, k, l, min;
	a = 6; b = 7;
	for (i = 0; i < 2; i++)
	{
		l = 0;
		min = a;
		for (k = i + 1; k < 2; k++)
		{
			if (b < min)
			{
				min = b;
				l = 1;
			}
		}
		if (l != 0)
		{
			b = a;
			a = min;
		}
	}
	printf("%d\t%d\n", a, b);
	return 0;
}
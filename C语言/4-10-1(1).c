#include <stdio.h>
int main()
{
	int n[1000], i, z,  y, min,l;
	printf("请输入： （输入y以结束输入）\n");
	for (i = 0, z = 0; i < 1000; i++)
	{
		scanf_s("%d", &n[i]);
		z++;
		if (n[i] == -858993460)
		{
			n[i] = 9999999;
			break;
		}
	}
	for (i = 0; i < z; i++)
	{
		if (n[i] == 9999999)
			break;
		l = 0;
		min = n[i];
		for (y = i+1; y < z; y++)
		{
			if (n[y] == 9999999)
				break;
			if (n[y] < min)
			{
				min = n[y];
				l = y;
			}
		}
		if (l != 0)
		{
			n[l] = n[i];
			n[i] = min;
		}
	}
	printf("\n");
	for (i = 0; i < 1000; i++)
	{
		if (n[i] == 9999999)
			break;
		printf("%d\t", n[i]);
		if (i % 13 == 0&&i!=0)
			printf("\n");
	}
	return 0;
}
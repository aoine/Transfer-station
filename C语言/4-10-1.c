#include <stdio.h>
int main()
{
	int n[10],i,z,x,y,min;
	printf("请输入： （输入y以结束输入）\n");
	for (i = 0,z=0; i < 1000; i++)
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
		min = n[i];
		for (y=i,x=0; y < z; y++)
		{
			if (n[y] == 9999999)
				break;
			if (n[y]<min)
			{
				min = n[y];
				x = y;
			}
		}
		if(x!=0)
			n[x] = n[i];
		n[i] = min;
	}
	for (i = 0; i < 1000; i++)
	{
		if (n[i] == 9999999)
			break;
		printf("%d\t", n[i]);
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0, x = 1, y, n, m, n1,m1,z,h=0;
	int a[5][5];
	for (n = 0; n < 5; n++)
		for (m = 0; m < 5; m++)
		{
			a[n][m] = i;
			i++;
		}
	for (n = 0; n < 5; n++)
		for (m = 0; m < 5; m++)
		{
			printf("%d\t", a[n][m]);
			if (x % 5 == 0)
				printf("\n");
			x++;
		}
	printf("输入一个5x5矩阵,或按 M 使用默认矩阵\n");
	for(n=0,y=0;n<5;n++)
		for (m = 0; m < 5; m++)
		{
			scanf("%d", &a[n][m]);
			y++;
			x=y;
			system("cls");
			printf("输入一个5x5矩阵,或按 M 使用默认矩阵\n");
			for (n1 = 0,z=1; n1 < 5; n1++)
			{
				for (m1 = 0; m1 < 5; m1++)
				{
					printf("%d\t", a[n1][m1]);
					x--;
					if (z == 5||z == 10||z == 15||z ==20||z==25)
						printf("\n");
					if (x == 0)
						break;
					z++;
				}
				if (x == 0)
					break;
				
			}
		}
	for(i=0;i<5;i++)
		h=h+a[i][i];
	printf("\n\n主对角线之为 %d \n\n\n",h);



	return 0;
}
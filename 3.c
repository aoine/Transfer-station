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
	printf("����һ��5x5����,�� M ʹ��Ĭ�Ͼ���\n");
	for(n=0,y=0;n<5;n++)
		for (m = 0; m < 5; m++)
		{
			scanf("%d", &a[n][m]);
			y++;
			x=y;
			system("cls");
			printf("����һ��5x5����,�� M ʹ��Ĭ�Ͼ���\n");
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
	printf("\n\n���Խ���֮Ϊ %d \n\n\n",h);



	return 0;
}
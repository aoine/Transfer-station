#include <stdio.h>
int jc(int n)
{
	int i;
	if( n == 1)
		i = 1;
	else
		i = n * jc( n-1 );
	return i;
}
int main()
{
	int n, j;
	printf("请输入要阶乘的数  =  ");
	scanf("%d", &n);
	j = jc( n );
	printf("\n  m! = %d \n\n", j);
	return 0;
}

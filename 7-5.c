#include <stdio.h>
int max(int a[10])
{
	int i, max;
	max = a[0];
	for( i=1; i < 10; i++)
		if( a[i] > max )
			max = a[i];
	return max;
}
int min(int a[10])
{
	int i, min;
	min = a[0];
	for( i=1; i < 10; i++)
		if( a[i] < min )
			min = a[i];
	return min;
}
int main()
{
	int i, scmax, scmin;
	int max(int a[10]);
	int min(int a[10]);
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("������10�������������� x ʹ��Ĭ�����飩\n");
	for( i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	scmax = max( a );
	scmin = min( a );
	printf("\n�����������Ϊ %d \n", scmax);
	printf("��������С��Ϊ %d \n\n", scmin);
	return 0;
}

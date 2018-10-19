#include<stdio.h>
#include<stdlib.h>
int main() {
	long int m,n,ma=1,na=1,o,oa=1,sum;
	printf("求排列組合C(m,n)\n");
	printf("m=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);
	o = m - n;
	for (int i = 1; i <= m; i++)
		ma = ma * i;
	for (int j = 1; j <= n; j++)
		na = na * j;
	for (int k = 1; k <=o; k++)
		oa = oa * k;
	sum = ma / na / oa;
	//printf("%d %d %d \n", ma, na, oa);
	printf("C(%d,%d)=%d \n", m, n, sum);
	system("pause");
	return 0;
}
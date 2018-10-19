#include<stdio.h>
#include<stdlib.h>
int sum(int p);
int main() {
	int m, n;
	int ans;
	int a, b, c;
	printf("求排列組合C(m,n)\n");
	printf("m=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);

	a = sum(m);
	b = sum(n);
	c = sum(m - n);

	ans = a / (b*c);
	printf("C(%d,%d)=%d\n", m, n, ans);

	system("pause");
	return 0;
}
int sum(int p) {
	if (p > 1) {
		int result = p * sum(p - 1);
		return result;
	}
	else
		return 1;
}
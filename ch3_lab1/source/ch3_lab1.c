#include<stdio.h>
#include<stdlib.h>

int odd(int U);
int even(int U);
int totalsum(int U);
int main() {
	int n, sum;
	int a;
	printf("1+2+...+n=? 請輸入n = ");
	scanf_s("%d", &n);
	fflush(stdin);
	printf("請問要做奇數和(1),偶數和(2),整數和(3)");
	scanf_s("%d", &a);
	switch (a) {
	case 1:
		sum = odd(n);
		break;
	case 2:
		sum = even(n);
		break;
	case 3:
		sum = totalsum(n);
		break;
	}
	printf("總合為%d \n", sum);
	system("pause");
	return 0;

}
int odd(int U) {
	int i, total = 0;
	for (i = 1; i <= U; i++) {
		if (i % 2 == 1)
			total = total + i;
		
	}return total;
}
int even(int U) {
	int i, total = 0;
	for (i = 1; i <= U; i++) {
		if (i % 2 == 0)
			total = total + i;
		
	}return total;
}
int totalsum(int U) {
	return odd(U) + even(U);
}
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, i,total=0;
	float sum;
	char b;
	printf("1+2+3+...+n=? �п�Jn = ");
	scanf_s("%d ", &a);
	printf("�аݬO�n���_�ƩM(0),���ƩM(E),�٬O��ƩM(I)? �п��:");
	scanf_s("%c \n", &b);
	for (i = 1; i <= a; i++) {
		if(b == 'O') {
			if (i % 2 == 1)
				sum += i;
		}
		else if (b == 'E') {
			if (i % 2 == 0)
				sum += i;
		}
		else if (b == 'I') {
			sum += i;
		}
	}
	printf("%.2f", sum);
	/*switch (b) {
		case 'o':
			sum = total / 2 + 1;
			printf("�`�X�� %d \n", sum);
			system("pause");
			return 0;
			break;
		case 'e':
			sum = total / 2;
			printf("�`�X�� %d \n", sum);
			system("pause");
			return 0;
			break;
		case 'i':
			sum = total;
			printf("�`�X�� %d \n", sum);
			system("pause");
			return 0;
			break;
	}	*/
	system("pause");
	return 0;
	
}
#include <stdio.h>

void convertion(int n)
{
	if (n >= 2)
	{
		convertion(n / 2);
	}
	printf("%d", n % 2);
}

int main() {
	int n;
	printf("������� ���������� �����: ");
	scanf_s("%d", &n);
	printf("(���������� ��): %d = ", n);
	convertion(n);
	printf(" (�������� ��)\n");
	return 0;
}
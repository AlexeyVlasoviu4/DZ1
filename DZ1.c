#include <stdio.h>
#include <windows.h>
#include <locale.h>

void convertion( int n )
{
if ( n >= 2 )
{
convertion( n/2 );
}
printf("%d", n % 2);
}


int main (void) {
setlocale(LC_ALL, "Russian");
int n;
printf("������� ���������� �����: \n");
scanf("%d", &n);
printf("(���������� C������ ���������): %d = ", n);
convertion( n );
printf(" (�������� ������� ���������)\n");
return 0;
}


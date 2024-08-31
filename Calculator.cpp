#include <stdio.h>

int main () {
	
	int a;
	int b;

	char op;
	float hasil;
	
	printf("Input 2 angka dan operator matematika yang diinginkan!:\n");
	
	printf("Angka ke-1:");
	scanf("%d", &a); getchar();
	
	printf("Pilih operator yang diinginkan:");
	scanf("%c", &op); getchar();
	
	printf("Angka ke-2:");
	scanf("%d", &b); getchar();
	
	if ( op == '+')
	{
		hasil = a + b;
		printf("Hasil: %d", (int)hasil);
	}
	else if ( op == '-')
	{
		hasil = a - b;
		printf("Hasil: %d", (int)hasil);
	}
	else if ( op == '/')
	{
		hasil = (float)a / b;
		printf("Hasil: %.2f", hasil);
	}
	else if ( op == '%')
	{
		hasil = a % b;
		printf("Hasil: %d", (int)hasil);
	}
	else if ( op == '*')
	{
		hasil = a * b;
		printf("Hasil: %d", (int)hasil);
	}
	else 
	{
		printf("ERROR");
	}
	
	
	return 0;
}

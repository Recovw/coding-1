#include <stdio.h>

int faktorial(int angka);

int main()
{
	int angka;
	
	printf("Ini adalah perhitungan faktorial, ketik angka apa saja:\n");
	printf("Ketika angka:");
    scanf("%d", &angka);
    
	printf("Hasil dari faktorial : %lld", faktorial(angka));
	
    
    return 0;
}

int faktorial(int angka)
{
	int produk = 1;
	
	for (int i = 1; i <= angka; i++)
	{
		produk *= i;
	}
	
	return produk;
}

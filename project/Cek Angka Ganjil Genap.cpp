#include <stdio.h>

int main() {
	
	printf("============================\n");
	printf("|| Cek Angka Ganjil Genap ||\n");
	printf("============================\n");
	
	
	int long long angka;
	int valid;
	
	do {
		printf("Masukkan Angka:");
	    valid = scanf("%lld", &angka);
	    while(getchar() !='\n');
	    
	}while(!valid);
	
	 if(angka % 2 == 0){
        printf("\nAngka %lld merupakan bilangan genap!", angka);
	      } else if (angka % 2 == 1) {
		     printf("\nAngka %lld merupakan bilangan ganjil!", angka);
	         }
	         
	         
	printf("\nTekan enter untuk mengakhiri");
	getchar();
	getchar();

	
	return 0;
}

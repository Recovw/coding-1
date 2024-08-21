#include <stdio.h>

/* Buatlah program seperti gambar di atas, dengan ketentuan:

1. Program akan meminta 1 buah input, yaitu input sebuah angka.

2. Jika sudah input sebuah angka, program akan cek apakah angka tersebut bilangan ganjil atau genap.

3. Terakhir program akan memberikan output dengan format:
     “Angka [angka] merupakan bilangan [genap/ganjil]!”
     “Tekan enter untuk mengakhiri…” */
     
     
int main() {
	
	printf("============================\n");
	printf("|| Cek Angka Ganjil Genap ||\n");
	printf("============================\n");
	
	
	int long long angka;
	
	printf("Masukkan Angka:");
	scanf("%lld", &angka); // %lld itu buat user input angka yg besar(1000000000000) keliatan saat di printf
	
	
	if(angka % 2 == 0){ // <-----  angka itu input dari user, % itu modulus contohnya: 10 dibagi 3, Hasilnya adalah 3 dengan sisa 1. jadi modulus (%) operator mengembalikan sisa, yaitu 1.
		printf("\nAngka %lld merupakan bilangan genap!", angka);
	} else if (angka % 2 == 1) { // <-----   % bisa juga buat ganjil genap 
		printf("\nAngka %lld merupakan bilangan ganjil!", angka);
	}
	
	
	printf("\nTekan enter untuk mengakhiri");


	
	return 0;
}

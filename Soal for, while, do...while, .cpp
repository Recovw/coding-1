#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Buatlah program, dengan ketentuan:
1. Program akan meminta 2 buah input, yaitu input umur dengan ketentuan umur harus di atas sama dengan 0 (jika kurang dari 0 maka program akan meminta input ulang) dan input jenis kelamin �L�
   (laki-laki) atau �P� (perempuan) (jika input selain karakter �L� atau �P� maka program akan meminta input ulang).
   
2. Jika sudah input sebuah angka, program akan cek apakah input jenis kelamin �L� atau �P�.

3. Terakhir program akan memberikan output sesuai jenis kelamin dengan format:
    �Saya seorang [laki-laki/perempuan] berumur [umur]!� */

int main () {
	
	printf("====================\n");
	printf("|| Validasi Input ||\n");
	printf("====================\n");
	
	int long long umur;
	char gender;
	
	printf("[JIKA MASUKKAN ANGKA MAKA PROGRAM AKAN ERROR!!!]\n");
	printf("Masukkan Umur [>=0]:");
	scanf("%lld", &umur); 
	
	
	if (umur <= 0) {
		do {
			printf("Masukkan Umur [>=0]:");
			scanf("%lld", &umur);
		}
		while (umur <= 0);
		
	} 

	while (1) { // buat ngeloop sampe dapet hasil yang diinginkan
	printf("Masukkan Jenis gender [L/P]:");
	scanf(" %c", &gender); getchar();
	gender = toupper(gender); // toupper untuk membuat huruf kecil menjadi huruf besar
	
	if (gender =='L' || gender == 'P'){
		break; // jika sudah sesuai, maka loop akan berakhir 
	}

	}
	
	if (gender == 'L') {
		printf("Saya seorang laki-laki berumur %lld!", umur);
	} else {
		printf("Saya seorang perempuan berumur %lld!", umur);
	}
  
	printf("\nTekan Enter Untuk Mengakhiri:");
	
	
	return 0;
}

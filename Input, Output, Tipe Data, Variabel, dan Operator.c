#include <stdio.h>

/* Buatlah program seperti gambar di atas, dengan ketentuan:

1. Program akan meminta 3 buah input, yaitu input nama barang dan bisa menerima lebih sama
dengan satu kata, kedua adalah input harga satuan barang, terakhir input jumlah barang yang
akan dijual.

2. Jika sudah ter-input semuanya, program akan menkalkulasi total keuntungan yang akan didapat
dari perkalian harga satuan barang dan jumlah barang yang dijual.

3. Terakhir program akan memberikan output dengan format:
   �Jadi barang yang terjual adalah [jumlah_barang] [nama_barang] dan mendapat keuntungan [total_keuntungan]!�
   �Tekan enter untuk mengakhiri�� */
   
   
int main() {
    printf("==========================\n");
    printf("|| Simulasi Jual Barang ||\n");
    printf("==========================\n");

    // char, int itu adalah string 
    char enter;
    char nama[100];
    int harga;
    int jumlah;

    printf("Masukkan Nama Barang (>=1 kata):"); 
    scanf("%[^\n]", &nama); // %[^\n] Buat bisa >2 kalimat, dan tidak perlu & karena sudah bertindak sebagai pointer ke tempat penyimpanan string yang akan diinputkan.

    printf("Masukkan Harga Barang:");
    scanf("%d", &harga); // scanf buat dapet input dari user 

    printf("Masukkan Jumlah Barang:");
    scanf("%d", &jumlah); 

    
    printf("\nJadi barang yang terjual adalah %d %s dan jumlah keuntungannya adalah %d\n", jumlah, nama, harga * jumlah); // lalu string yang user input akan diprintf di sini 

   
    printf("Tekan Enter Untuk Mengakhiri...");
    

    return 0;
}


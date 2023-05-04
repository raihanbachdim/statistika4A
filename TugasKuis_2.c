#include <stdio.h>
#include <math.h>

int main() {

    // inisialisasi variabel
    float p1,w1,w2,np1,np2,p2;

    w1 = 30; // waktu pengamatan p1
    printf("Masukan peluang melihat mobil dalam 30 menit (desimal) : ");
    scanf("%f", &p1);// peluang melihat mobil pada waktu 30 menit
    
    printf("Masukan waktu yang ingin dicari peluang melihat mobilnya (menit) : ");
    scanf("%f", &w2); // waktu pengamatan pw

    np1 = 1 - p1; // peluang tidak melihat mobil pada waktu 30 menit (w1)
    np2 = pow(np1, w2/w1); // presentasi tidak melihat mobil pada waktu 10 menit (w2)
    p2 = 1 - np2; // presentasi melihat mobil pada waktu 10 menit
    
    printf("Peluang melihat mobil dalam waktu 10 menit: %f", p2);
    
    return 0;
}

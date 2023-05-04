#include <stdio.h>
#include <stdlib.h>

    // Contoh input yang sesuai soal
    // float H = 0.333;
    // float H_P = 0.5;
    // float NH_P = 0.25;
    // float T_HP = 0.5;
    // float T_NHNP = 0.125;
    // float T_HNP = 0.25;
    // float T_NHP = 0.25;

    // aturan penamaan variabel :
    // H = adalah peluang hujan
    // NH = peluang tidak hujan
    // P = peluang lalu lintas padat
    // NP = peluang lalu lintas tidak padat
    // T = peluang andi terlambat
    // NT = peluang andi tidak terlambat
    // jika dua variabel diatas berdempetan berarti irisan
    // misal HNP berarti H irisan NP
    // jika dua variabel dipisahkan _ berarti peluang bersyarat
    // misal P_T berarti ( P | T )


int main() {
    // inisialisasi nilai dari variabel yang diberikan dalam soal
    printf("Masukan probabilitas ");

    // inisialisasi variabel yang akan diisi oleh user
    float H, H_P, NH_P, T_HP, T_NHNP, T_HNP, T_NHP;

    // meminta input dari user
    printf("Masukan peluang turun hujan di kota (desimal) : ");
    scanf("%f", &H);
    printf("Masukan peluang lalu lintas padat jika hujan (desimal) : ");
    scanf("%f", &H_P);
    printf("Masukan peluang lalu lintas padat jika tidak hujan (desimal) : ");
    scanf("%f", &NH_P);
    printf("Masukan peluang Andi terlambat saat hujan dan lalin padat (desimal) : ");
    scanf("%f", &T_HP);
    printf("Masukan peluang Andi terlambat saat tidak hujan dan lalin tidak padat (desimal) : ");
    scanf("%f", &T_NHNP);
    printf("Masukan peluang Andi terlambat saat hujan dan lalin tidak padat (desimal) : ");
    scanf("%f", &T_HNP);
    printf("Masukan peluang Andi terlambat saat tidak hujan dan lalin padat (desimal) : ");
    scanf("%f", &T_NHP);

    // berikut merupakan variabel yang nilai nya diketahui dengan mengolah beberapa nilai yang sebelumnya sudah diinputkan
    float NH, H_NP, NH_NP;
    NH = 1 -  H;
    H_NP = 1 - H_P;
    NH_NP = 1 - NH_P;

    // inisialisasi variabel yang nilai nya akan dicari
    float NT_NHP, T, H_T, HP, NHP, HNP, NHNP, TH;

    // jawaban A - probabilitas Andi tidak terlambat pada kondisi hari tidak hujan dan lalu lintas padat
    NT_NHP = 1.0 - T_NHP;
    printf("\nPeluang Andi tidak terlambat pada kondisi hari tidak hujan dan lalu lintas padat adalah : %f\n", NT_NHP);

    // jawaban B - probabilitas Andi akan datang terlambat

    HP = H_P * H;
    HNP = H_NP * H;
    NHP = NH_P * NH;
    NHNP = NH_NP *NH;
    T = (T_HP * HP) + (T_NHP * NHP) + (T_HNP * HNP) + (T_NHNP * NHNP);
    printf("Peluang Andi akan datang terlambat adalah: %f\n", T);

    // jawaban C - probabilitas pada waktu itu hari hujan jika diketahui Andi datang terlambat
    TH = (T_HP * HP) + (T_HNP * HNP);
    H_T = TH / T;
    printf("Peluang hari hujan jika diketahui Andi datang terlambat adalah : %f\n", H_T);

    return 0;
}

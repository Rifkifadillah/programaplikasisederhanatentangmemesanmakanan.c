#include <stdio.h>
#include <stdlib.h>

int main() {

    int ramen, sushi, ocha, lemontea, hramen, hsushi, hocha, hlemontea, jramen, jsushi, jocha, jlemontea, beli, Menu, total, lanjut, kembali;

    hramen = 27000;
    hsushi = 20000;
    hocha = 5000;
    hlemontea = 7000;
    jramen = 0;
    jsushi = 0;
    jocha = 0; 
    jlemontea = 0;
    ramen = 0;
    sushi = 0;
    ocha = 0;
    lemontea = 0;

Menu:
    printf("selamat datang di ramenichiraku\n");
    printf("==============================\n");
    printf("Daftar Menu Makanan & Minuman:\n");
    printf("(1) Ramen\n (2) Sushi\n (3) ocha\n (4) Lemontea\n");
    printf("Masukkan kode menu yang dibeli: ");
    scanf("%d", &beli);

    if (beli == 1) {
    ramen:
        printf("Masukkan jumlah ramen yang dibeli: ");
        scanf("%d", &jramen);
        if (jramen < 0) {
            printf("Maaf ulangi lagi\n");
            goto ramen;
        } else {
            ramen = jramen * hramen;
            printf("\nPesan lagi?\n");
            printf("(1) Ya\n (2) Tidak\n");
            printf("Pilihan anda:");
            scanf("%d", &Menu);
            printf("\n");
            if (Menu == 1) {
                goto Menu;
            } else {
                goto hitung;
            }
        }
    } else {
        if (beli == 2) {
        sushi:
            printf("Masukkan jumlah sushi yang dibeli: ");
            scanf("%d", &jsushi);
            if (jsushi < 0) {
                printf("Maaf ulangi lagi\n");
                goto sushi;
            } else {
                sushi = jsushi * hsushi;
                printf("\nPesan lagi?\n");
                printf("(1) Ya\n (2) Tidak\n");
                printf("Pilihan anda:");
                scanf("%d", &Menu);
                printf("\n");
                if (Menu == 1) {
                    goto Menu;
                } else {
                    goto hitung;
                }
            }
        } else {
            if (beli == 3) {
            ocha:
                printf("Masukkan jumlah ocha yang dibeli: ");
                scanf("%d", &jocha);
                if (jocha < 0) {
                    printf("Maaf ulangi lagi\n");
                    goto ocha;
                } else {
                    ocha = jocha * hocha;
                    printf("\nPesan lagi?\n");
                    printf("(1) Ya\n (2) Tidak\n");
                    printf("Pilihan anda:");
                    scanf("%d", &Menu);
                    printf("\n");
                    if (Menu == 1) {
                        goto Menu;
                    } else {
                        goto hitung;
                    }
                }
            } else {
                if (beli == 4) {
                lemontea:
                    printf("Masukkan jumlah lemontea yang dibeli: ");
                    scanf("%d", &jlemontea);
                    if (jlemontea < 0) {
                        printf("Maaf ulangi lagi\n");
                        goto lemontea;
                    } else {
                        lemontea = jlemontea * hlemontea;
                        printf("\nPesan lagi?\n");
                        printf("(1) Ya\n (2) Tidak\n");
                        printf("Pilihan anda:");
                        scanf("%d", &Menu);
                        printf("\n");
                        if (Menu == 1) {
                            goto Menu;
                        } else {
                            goto hitung;
                        }
                    }
                } else {
                    printf("Input yang anda masukkan salah, silahkan coba lagi\n");
                    goto Menu;
                }
            }
        }
    }

hitung:
    printf("Anda telah memesan\n");
    if (jramen > 0) {
        printf("Ramen : %d\n", jramen);
    }
    if (jsushi > 0) {
        printf("Sushi : %d\n", jsushi);
    }
    if (jocha > 0) {
        printf("Ocha : %d\n", jocha);
    }
    if (jlemontea > 0) {
        printf("Lemontea : %d\n", jlemontea);
    }
    printf("\nAnda sudah yakin?\n");
    printf("(1) ya\n (2) tidak\n");
    printf("pilihan anda: ");
    scanf("%d", &lanjut);
    printf("\n");
    if (lanjut == 1) {
        goto Total;
    } else {
        goto Menu;
    }

Total:
    printf("Total menu Anda adalah:\n");
    if (jramen > 0) {
        printf("Ramen : %d x %d = %d\n", jramen, hramen, ramen);
    }
    if (jsushi > 0) {
        printf("Sushi : %d x %d = %d\n", jsushi, hsushi, sushi);
    }
    if (jocha > 0) {
        printf("Ocha : %d x %d = %d\n", jocha, hocha, ocha);
    }
    if (jlemontea > 0) {
        printf("Lemontea : %d x %d = %d\n", jlemontea, hlemontea, lemontea);
    }

    printf("==============================================================\n");
    total = ramen + sushi + ocha + lemontea;
    printf("Total            : %d\n", total);
    printf("Terimakasih telah memesan, Silahkan Bayar ke kasir ");

    return 0;
}

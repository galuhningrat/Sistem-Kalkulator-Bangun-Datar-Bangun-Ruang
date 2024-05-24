#include <stdio.h>
#include <stdlib.h>

void main() {

    float s, sisi, sisiA, sisiB, luas, luasB, panjang, lebar, tinggi, keliling, luasKeliling, sRusuk,
            miring, r, d1, d2;
            /* s = garis pelukis u/ kerucut
             * r u/ jari-jari lingkaran */
    int pilihan, pil, l, p, k, luasI, a, t, sm, st, tinggiPrisma, kelilingAlas, panjangBawah, panjangAtas, miringI;
    /* st = sisi tegak */
    mulai:
    printf("Kalkulator Canggih B-)\n\t 1. Bangun Datar \n\t 2. Bangun Ruang \n\n Pilih 1/2? :  ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        printf("\nMenghitung Bangun Datar:\n");
        printf("\t 1. Luas Persegi\n");
        printf("\t 2. Luas Persegi Panjang\n");
        printf("\t 3. Luas Segitiga\n");
        printf("\t 4. Luas Trapesium siku-siku\n");
        printf("\t 5. Luas Jajar Genjang\n");
        printf("\t 6. Luas Lingkaran\n");
        printf("\t 7. Luas Belah Ketupat\n");
        printf("\t 8. Luas Layang - Layang\n");
        printf("\t 9. Keluar\n");
        printf("Bangun datar adalah bangun dua dimensi, sehingga cara menghitungnya ditentukan dari setiap sisi.\n\n");
        printf("Pilih bangun datar/bangun ruang yang ingin dihitung: ");
        scanf("%i", &pilihan);
        switch (pilihan)
        {
            case 1:
                printf("\nInput sisi persegi: \n");
                scanf("%f", &sisi);
                // nilai input pertama harus sama dengan nilai input kedua
                printf("Nilai input pertama harus sama dengan nilai input kedua. \nInput sisi persegi: \n");
                scanf("%f", &sisi);

                // setelah menginputkan, kemudian hitung lausnya
                luas = sisi * sisi;
                printf("Luas persegi Anda adalah %.1f\n", luas);

                /* menghitung luas keliling (mwnghitung jumlah panjang seluruh sisi
                 * (sisi bawah, kanan, atas, dan kiri) dengan rumusnya adalah 4 x s2
                                                                            = 4 x 2 = 8 cm */
                luasKeliling = luas * sisi;
                printf("Keliling persegi Anda adalah %.1f", luasKeliling);

                printf("\n\n1. Kembali ke Menu\n");
                printf("2. Keluar\n");
                printf("Pilih:\n");
                scanf_s("%d", &pil);
                if(pil == 1)
                    goto mulai;
                else
                    return exit(0);
                return;
                break;
                // 2
            case 2:
                printf("\nInput panjang persegi panjang:\n");
                scanf("%d", &p);
                printf("Input luas persegi panjang:\n");
                scanf("%d", &l);

                luasI = p * l;
                printf("Luas persegi panjang Anda adalah %d\n", luasI);

                // mencari keliling (menjumlahkan seluruh panjang sisinya)
                k = (2 * p) + (2 * l);
                printf("Keliling persegi panjang Anda adalah %d\n ", k);

                printf("\n\n1. Kembali ke Menu\n");
                printf("2. Keluar\n");
                printf("Pilih:\n");
                scanf_s("%d", &pil);
                if(pil == 1)
                    goto mulai;
                else
                    return exit(0);
                return;
                break;
                // 6, 3
            case 3:
                // Input alas, tinggi, dan sisi miring segitiga
                printf("\nInput alas segitiga:\n");
                scanf("%d", &a);
                printf("Input tinggi segitiga:\n");
                scanf("%d", &t);
                printf("Input sisi miring segitiga:\n");
                scanf("%d", &sm);

                // Menghitung luas segitiga
                float luas = 0.5 * a * t; // Menggunakan 0.5 untuk mewakili 1/2

                // Menghitung keliling segitiga
                k = a + sm + sm;

                // Menampilkan hasil
                printf("Luas segitiga Anda adalah %.2f\n", luas);
                printf("Keliling segitiga Anda adalah %d\n", k);

                printf("\n\n1. Kembali ke Menu\n");
                printf("2. Keluar\n");
                printf("Pilih:\n");
                scanf_s("%d", &pil);
                if(pil == 1)
                    goto mulai;
                else
                    return exit(0);
                return;
                break;
                // 6, 4, 5
            case 4:
                printf("\nInput panjang bagian bawah trapesium:\n");
                scanf("%d", &panjangBawah);
                printf("Input panjang bagian atas trapesium:\n");
                scanf("%d", &panjangAtas);
                printf("Input tinggi trapesium:\n");
                scanf("%d", &t);
                printf("Input bagian miring trapesium:\n");
                scanf("%d", &miringI);

                // rumus untuk menentukan luas trapesium
                luasI = 0.5 * ((panjangBawah + panjangAtas) * t);
                k = panjangBawah + miringI + panjangAtas + t;
                printf("Luas trapesium Anda adalah %d\n", luasI);
                printf("Keliling trapesium Anda adalah %d\n", k);

                printf("\n\n1. Kembali ke Menu\n");
                printf("2. Keluar\n");
                printf("Pilih:\n");
                scanf_s("%d", &pil);
                if(pil == 1)
                    goto mulai;
                else
                    return exit(0);
                return;
                break;
                // 9, 6, 4, 5
                // easy peasy
            case 5:
                printf("\nPerlu diingat bahwa jajar genjang memiliki dua sisi dengan panjang yang sama, yaitu bagian"
                       "bawah sama panjang dengan bagian atas dan bagian kanan sama panjang dengan bagian kiri.\n"
                       "Input panjang bagian bawah & bagian atas jajar genjang:\n");
                scanf("%f", &panjang);
                printf("Input tinggi jajar genjang:\n");
                scanf("%f", &tinggi);
                printf("Input bagian miring kanan & miring kiri jajar genjang:\n");
                scanf("%f", &miring);

                // rumums untuk menentukan luas jajar genjang
                luas = panjang * tinggi;
                keliling = panjang + miring + panjang + miring;
                printf("Luas jajar genjang Anda adalah %1.f\n", luas);
                printf("Keliling jajar ganjnag Anda adalah %1.f\n", keliling);

                printf("\n\n1. Kembali ke Menu\n");
                printf("2. Keluar\n");
                printf("Pilih:\n");
                scanf_s("%d", &pil);
                if(pil == 1)
                    goto mulai;
                else
                    return exit(0);
                return;
                break;
                // 10, 5, 7
            case 6:
                printf("\nInput jari-jari lingkaran:\n");
                scanf("%f", &r);

                luas = 3.14 * r * r;
                keliling = 2 * 3.14 * r;
                printf("Luas lingkaran Anda adalah %.2f\n", luas);
                printf("Keliling lingkaran Anda adalah %.2f\n", keliling);

                printf("\n\n1. Kembali ke Menu\n");
                printf("2. Keluar\n");
                printf("Pilih:\n");
                scanf_s("%d", &pil);
                if(pil == 1)
                    goto mulai;
                else
                    return exit(0);
                return;
                break;
                // 14
            case 7:
                printf("\nInput panjang diagonal horizontal belah ketupat:\n");
                scanf("%f", &d1);
                printf("Input panjang diagonal vertikal belah ketupat:\n");
                scanf("%f", &d2);
                printf("Perlu diingat bahwa belah ketupat memiliki empat sisi yang sama.\nInput sisi belah ketupat:\n");
                scanf("%f", &sisi);

                luas = 0.5 * d1 * d2;
                keliling = 4 * sisi;
                printf("Luas belah ketupat Anda adalah %1.f\n", luas);
                printf("Keliling belah ketupat Anda adalah %1.f\n", keliling);

                printf("\n\n1. Kembali ke Menu\n");
                printf("2. Keluar\n");
                printf("Pilih:\n");
                scanf_s("%d", &pil);
                if(pil == 1)
                    goto mulai;
                else
                    return exit(0);
                return;
                break;
                // 8, 6, 5
            case 8:
                printf("\nPerlu diingat bahwa layang-layang memiliki dua pasang sisi yang sama.\nInput panjang diagonal horizontal layang-layang:\n");
                scanf("%f", &d1);
                printf("Input panjang diagonal vertikal layang-layang:\n");
                scanf("%f", &d2);
                printf("Input panjang sisi miring atas layang-layang:\n");
                scanf("%f", &sisiA);
                printf("Input panjang sisi miring bawah layang-layang:\n");
                scanf("%f", &sisiB); // don't forget layang-layang memiliki dua pasang sisi yang sama panjang

                luas = 0.5 * d1 * d2;
                keliling = sisiA + sisiA + sisiB + sisiB;
                printf("Luas layang-layang Anda adalah %1.f\n", luas);
                printf("Keliling layang-layang Anda adalah %1.f", keliling);

                printf("\n\n1. Kembali ke Menu\n");
                printf("2. Keluar\n");
                printf("Pilih:\n");
                scanf_s("%d", &pil);
                if(pil == 1)
                    goto mulai;
                else
                    return exit(0);
                return;
                break;
                // 24, 48, 5, 37

            case 9:
                return exit;
                break;

            default:
                printf("Opsi yang Anda Pilih Tidak Valid!\n");
                goto mulai;
                break;

            }
            //
        } else if (pilihan == 2) {

        printf("\t 1. Luas Permukaan Kubus\n");
        printf("\t 2. Luas Permukaan Balok\n");
        printf("\t 3. Luas Permukaan Prisma segitigsan");
        printf("\t 4. Luas Permukaan Limas segi empat\n");
        printf("\t 5. Luas Permukaan Kerucut\n");
        printf("\t 6. Luas Permukaan Tabung\n");
        printf("\t 7. Luas Permukaan Bola\n");
        printf("\t 8. Keluar\n\n");
        printf("Pilih bangun datar/bangun ruang yang ingin dihitung: ");
        scanf("%i", &pilihan);

        switch (pilihan) {
            case 1:
                printf("\nPerlu diingat bahwa sebuah ruang kubus memiliki panjang yang sama pada setiap rusuknya.\nInput panjang rusuk kubus:\n");
                scanf("%f", &sRusuk);

                luas = 6 * (sRusuk * sRusuk);
                printf("Luas permukaan kubus Anda adalah: %2.f\n", luas);
                // input panjang rumus kubus 10 = 600

                printf("\n\n1. Kembali ke Menu\n");
                printf("2. Keluar\n");
                printf("Pilih:\n");
                scanf_s("%d", &pil);
                if (pil == 1)
                    goto mulai;
                else
                    return exit(0);
                return;
                break;
                //10
            case 2:
                printf("\nInput panjang balok:\n");
                scanf("%f", &panjang);
                printf("Input lebar balok:\n");
                scanf("%f", &lebar);
                printf("Input tinggi balok:\n");
                scanf("%f", &tinggi);

                luasB = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
                printf("Luas permukaan balok Anda adalah: %2.f\n", luasB);

                printf("\n\n1. Kembali ke Menu\n");
                printf("2. Keluar\n");
                printf("Pilih:\n");
                scanf_s("%d", &pil);
                if (pil == 1)
                    goto mulai;
                else
                    return exit(0);
                return;
                break;
                // 8, 5, 4
            case 3:
                //
                printf("\nInput luas segita:\n");
                scanf("%d", &luasI);
                printf("Input alas segitiga:\n");
                scanf("%d", &a);
                printf("Input tinggi segitiga:\n");
                scanf("%d", &t);
                printf("Input tinggi Prisma:\n");
                scanf("%d", &tinggiPrisma);

                kelilingAlas = 2 * (0.5 * a * t) + ((a + luasI + luasI) * tinggiPrisma);
                printf("Hasil perhitungan luas permukaan prisma adalah %d\n", kelilingAlas);

                printf("\n\n1. Kembali ke Menu\n");
                printf("2. Keluar\n");
                printf("Pilih:\n");
                scanf_s("%d", &pil);
                if (pil == 1)
                    goto mulai;
                else
                    return exit(0);
                return;
                break;
                // 5, 6, 4, 10
            case 4:
                printf("\nInput luas alas limas:\n");
                scanf("%d", &a);
                printf("Input luas sisi tegak limas:\n");
                scanf("%d", &st);
                printf("Input tinggi limas:\n");
                scanf("%d", &t);

                luasI = (a * a) + (st * 0.5 * a * t);
                printf("Luas permukaan limas Anda adalah %d", luasI);

                printf("\n\n1. Kembali ke Menu\n");
                printf("2. Keluar\n");
                printf("Pilih:\n");
                scanf_s("%d", &pil);
                if (pil == 1)
                    goto mulai;
                else
                    return exit(0);
                return;
                break;
                // 6, 5, 4
            case 5:
                printf("\nInput jari-jari kerucut:\n");
                scanf("%f", &r);
                printf("Input panjang garis pelukis kerucut:\n");
                scanf("%f", &s);

                luas = 3.14 * r * (r + s);
                printf("Luas permukaan kerucut Anda adalah %.2f\n", luas);

                printf("\n\n1. Kembali ke Menu\n");
                printf("2. Keluar\n");
                printf("Pilih:\n");
                scanf_s("%d", &pil);
                if (pil == 1)
                    goto mulai;
                else
                    return exit(0);
                return;
                break;
                //7, 25
            case 6:
                printf("\nInput jari-jari tabung:\n");
                scanf("%f", &r);
                printf("Input tinggi tabung:\n");
                scanf("%f", &tinggi);

                luas = 2 * 3.14 * r * (r + tinggi);
                printf("Luas permukaan tabung Anda adalah %.2f\n", luas);

                printf("\n\n1. Kembali ke Menu\n");
                printf("2. Keluar\n");
                printf("Pilih:\n");
                scanf_s("%d", &pil);
                if (pil == 1)
                    goto mulai;
                else
                    return exit(0);
                return;
                break;
                //7, 13
            case 7:
                printf("\nInput jari-jari bola:\n");
                scanf("%f", &r);

                luas = 4 * 3.14 * (r * 7);
                printf("Luas permukaan Bola Anda adalah %.2f", luas);

                printf("\n\n1. Kembali ke Menu\n");
                printf("2. Keluar\n");
                printf("Pilih:\n");
                scanf_s("%d", &pil);
                if (pil == 1)
                    goto mulai;
                else
                    return exit(0);
                return;
                break;
                //7
            case 8:
                return exit;
                break;
            default:
                printf("Opsi yang Anda Pilih Tidak Valid!\n");
                goto mulai;
                break;
        }
    }
}

/* note: Meter persegi (m²) adalah satuan luas,  sedangkan meter (m) adalah satuan panjang. Luas menunjukkan seberapa besar permukaan suatu bidang, sedangkan panjang hanya menunjukkan seberapa jauh ujung ke ujung suatu objek.
Sebagai contoh,  sebidang tanah yang memiliki luas 8 m² bisa memiliki panjang 2 meter dan lebar 4 meter. luas dihitung dengan mengalikan panjang x lebar.
Jika Anda mengetahui keliling lahan berbentuk persegi tersebut, Anda bisa menghitung panjang sisinya [1]. Namun, keliling tidak sama dengan luas. */

/* Luas tanah 8 m² itu berapa meter?
   Jawaban:
   64 Meter
   Penjelasan dengan langkah-langkah:
   Jadi 8 m² itu
   8² = 8×8
   = 64 Meter */
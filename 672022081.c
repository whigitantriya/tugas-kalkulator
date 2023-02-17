#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int cont;
//ping poro sudo
void kali(){
    int a, b, hasil;
    ulangi:
    printf("Masukkan Angka Pertama : ");
    scanf("%d", &a);
    printf("Masukkan Angka Kedua : ");
    scanf("%d", &b);

    hasil= a*b;
    printf("Hasil perkalian dari %d + %d = %d\n", a, b, hasil);

    balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_porosudo();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}

void bagi(){
    float a, b, hasil;
    ulangi:
    printf("Masukkan Angka Pertama : ");
    scanf("%f", &a);
    printf("Masukkan Angka Kedua : ");
    scanf("%f", &b);

    hasil= a/b;
    printf("Hasil pembagian dari %.2f : %.2f = %.2f\n", a, b, hasil);

    balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_porosudo();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}

void tambah(){
    int a, b, hasil;
    ulangi:
    printf("Masukkan Angka Pertama : ");
    scanf("%d", &a);
    printf("Masukkan Angka Kedua : ");
    scanf("%d", &b);

    hasil= a+b;
    printf("Hasil tambah dari %d + %d = %d\n", a, b, hasil);

    balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_porosudo();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}

void kurang(){
    int a, b, hasil;
    ulangi:
    printf("Masukkan Angka Pertama : ");
    scanf("%d", &a);
    printf("Masukkan Angka Kedua : ");
    scanf("%d", &b);

    hasil= a-b;
    printf("Hasil kurang dari %d - %d = %d\n", a, b, hasil);

    balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_porosudo();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}
void sinus (){
    double inputan,total=0, PI=3.14;
    ulangi:
    printf ("Masukkan derajat Sinus = ");
    scanf ("%lf", &inputan);

    inputan = (inputan * PI)/180;
    total = sin(inputan);
    printf ("Hasil Sinus adalah %.2lf", total);

    printf ("\nPress any key to continue . . .");
    getch();

    balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_sincostan();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}

void cosinus(){
    double inputan,total=0, PI=3.14;
    ulangi:
    printf ("Masukkan derajat Cosinus = ");
    scanf ("%lf", &inputan);

    inputan = (inputan * PI)/180;
    total = cos(inputan);
    printf ("Hasil Cosinus adalah %.2lf", total);

    printf ("\nPress any key to continue . . .");
    getch();

    balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_sincostan();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}

void tangen(){
    double inputan,total=0, PI=3.14;
    ulangi:
    printf ("Masukkan derajat Tangen = ");
    scanf ("%lf", &inputan);

    inputan = (inputan * PI)/180;
    total = tan(inputan);
    printf ("Hasil Tangen adalah %.2lf\n", total);

    printf ("\nPress any key to continue . . .");
    getch();

    balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_sincostan();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}
//keliling
void kelpersegi(){
    int pjg, lbr, keliling=0, cont;
    ulangi:
    printf("Masukkan panjang persegi : ");
    scanf("%d", &pjg);
    printf("masukkan lebar persegi : ");
    scanf("%d", &lbr);

    keliling = (2*pjg)+(2*lbr);
    printf("Keliling persegi = %d\n", keliling);

    balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_kel();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}

void keltrapesium(){
    int a, b, c, keliling=0;
    ulangi:
    printf("Masukkan sisi atas trapesium sama kaki : ");
    scanf("%d", &a);
    printf("masukkan sisi bawah trapesium sama kaki : ");
    scanf("%d", &b);
    printf("MAsukkan tinggi trapesium sama kaki : ");
    scanf("%d", &c);

   keliling = a+b+c+c;
   printf("Keliling Trapesium = %d\n", keliling);


    balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_kel();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}

void kellayang(){
    int a, b, keliling=0;
    ulangi:
    printf("Masukkan diagonal 1 : ");
    scanf("%d", &a);
    printf("masukkan diagonal 2 : ");
    scanf("%d", &b);

   keliling = 2*(a+b);
   printf("Keliling layang-layang = %d\n", keliling);


    balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_kel();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}

void kellingkaran(){
     float d, r, keliling1=0, keliling2=0;
     ulangi:
   printf("Masukkan diameter lingkaran : ");
    scanf("%f", &d);
    printf("Masukkan jari-jari lingkaran : ");
    scanf("%f", &r);

   keliling1 = 3.14*d;
   keliling2 = 3.14*2*r;
   printf("Keliling lingkaran berdasarkan diameter = %.2f\n", keliling1);
   printf("Keliling lingkaran berdasarkan jari-jari = %.2f\n", keliling2);


    balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_kel();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}
//luas
void luaspersegi(){
    int pjg, lbr, luas=0;
    ulangi:
    printf("Masukkan panjang persegi : ");
    scanf("%d", &pjg);
    printf("masukkan lebar persegi : ");
    scanf("%d", &lbr);

   luas = pjg*lbr;
   printf("luas persegi = %d\n", luas);


    balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_luas();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}

void luastrapesium(){
     float a, b, tinggi, luas=0;
     ulangi:
    printf("Masukkan sisi atas trapesium sama kaki : ");
    scanf("%f", &a);
    printf("masukkan sisi bawah trapesium sama kaki : ");
    scanf("%f", &b);
    printf("MAsukkan tinggi trapesium sama kaki : ");
    scanf("%f", &tinggi);

   luas = 0.5*(a+b)*tinggi;
   printf("Luas trapesium adalah %.2f\n", luas);

    balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_luas();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}

void luaslayang(){
    float d1, d2, luas=0;
    ulangi:
    printf("Masukkan diagonal 1 : ");
    scanf("%f", &d1);
    printf("masukkan diagonal 2 : ");
    scanf("%f", &d2);

   luas = 0.5*d1*d2;
   printf("luas layang-layang = %.2f\n", luas);

      balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_luas();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}

void luaslingkaran(){
  float r, d, e, luas1=0, luas2=0;
  ulangi:
    printf("Masukkan jari-jari lingkaran : ");
    scanf("%f", &r);
    printf("Masukkan diameter lingkaran : ");
    scanf("%f", &d);

    e = d/2;
    luas1 = 3.14*r*r;
    luas2 = 3.14*e*e;
    printf("luas lingkaran berdasarkan jari-jari = %.2f\n", luas1);
    printf("luas lingkaran berdasarkn diameter = %.2f\n", luas2);

   balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_luas();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}
//volume
void volumekubus(){
    int s, volume=0;
    ulangi:
    printf("Masukkan sisi kubus : ");
    scanf("%d", &s);

   volume = s*s*s;
   printf("Volume kubus = %d", volume);

    balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_luas();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}

void volumeprisma(){
    float sisi, alassegitiga, tinggisegitiga, r, d, t, volume1=0, volume2=0, volume3=0, volume4=0, luasalas1, luasalas2, luasalas3, luasalas4;
    ulangi:
    printf("Masukkan sisi Persegi : ");
    scanf("%f", &sisi);
    printf("Masukkan Lebar Alas Segitiga : ");
    scanf("%f", &alassegitiga);
    printf("Masukkan Tinggi Segitiga : ");
    scanf("%f", &tinggisegitiga);
    printf("Masukkan Jari-jari Lingkaran : ");
    scanf("%f", &r);
    printf("Masukkan diameter Lingkaran : ");
    scanf("%f", &r);
    printf("Masukkan Tinggi prisma : ");
    scanf("%f", &t);

    luasalas1 = sisi*sisi;
    volume1 = luasalas1*t;
    luasalas2 = 0.5*alassegitiga*tinggisegitiga;
    volume2 = luasalas2*t;
    luasalas3 = 3.14*r;
    volume3 = luasalas3;
    luasalas4 = 3.14*(d/2);
    volume4 = luasalas4;

    printf("Volume Prisma Persegi adalah = %.2f\n", volume1);
    printf("Volume Prisma segitiga adalah = %.2f\n", volume2);
    printf("Volume Prisma silinder = %.2f\n", volume3);
    printf("Volume Prisma Silinder = %.2f\n", volume4);

    balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_luas();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}

void volumelimas(){
    float sisi, alassegitiga, tinggisegitiga, r, d, t, jaridm, volume1=0, volume2=0, volume3=0, volume4=0;
    ulangi:
    printf("Masukkan sisi Persegi : ");
    scanf("%f", &sisi);
    printf("Masukkan Lebar Alas Segitiga : ");
    scanf("%f", &alassegitiga);
    printf("Masukkan Tinggi Segitiga : ");
    scanf("%f", &tinggisegitiga);
    printf("Masukkan Jari-jari Lingkaran : ");
    scanf("%f", &r);
    printf("Masukkan diameter Lingkaran : ");
    scanf("%f", &d);
    printf("Masukkan Tinggi Limas : ");
    scanf("%f", &t);

    jaridm = d/2;
    volume1 = sisi*sisi*t/3;
    volume2 = alassegitiga*tinggisegitiga*t/6;
    volume3 = (3.14*r*r)*t/3;
    volume4 = (3.14*jaridm*jaridm)*t/3;

    printf("Volume Limas Persegi adalah = %.2f\n", volume1);
    printf("Volume Limas segitiga adalah = %.2f\n", volume2);
    printf("Volume Limas silinder berdasarkan jari-jari = %.2f\n", volume3);
    printf("Volume Limas Silinder berdasarkan dimeter = %.2f\n", volume4);

    balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_luas();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}

void volumebola(){
    float r, d, volume1=0, volume2=0, luasling1, luasling2;
     ulangi:
    printf("Masukkan jari-jari lingkaran : ");
    scanf("%f", &r);
    printf("Masukkan jari-jari lingkaran : ");
    scanf("%f", &d);

    volume1 = (4.0 / 3) * 3.14 * r * r * r;
    volume2 = (4.0 / 3) * 3.14 * (d/2) * (d/2) * (d/2);
    printf("Volume Bola berdasarkan Jari-jari adalah = %.2f\n", volume1);
    printf("Volume Bola berdasarkan diametet adalah = %.2f\n", volume2);
    balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_luas();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}

void akar(){
    float n;
    double hasil;
    ulangi:
    printf("Masukkan bilangan yang diakar : ");
    scanf("%f", &n);

    hasil = sqrt(n);
    printf("Hasil akar dari %.2f adalah %.2f", n, hasil);

    balik:
    printf ("\nApakah Anda Ingin Mengulang? (y/n) :  ");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulangi;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *main();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto balik;
                }
}

void menu_porosudo(){
    int pilih;
    printf("|-------------------------------|\n");
    printf("|      Ping Poro Lan Sudo       |\n");
    printf("|-------------------------------|\n");
    printf("|   1. Perkalian                |\n");
    printf("|   2. Pembagian                |\n");
    printf("|   3. Penjumlahan              |\n");
    printf("|   4. Pengurangan              |\n");
    printf("|   5. Return ke menu awal      |\n");
    printf("|-------------------------------|\n");
    printf("Masukkan Pilihan anda : ");
    scanf("%d", &pilih);
    system("cls");

    switch(pilih){
        case 1 : kali(); break;
        case 2 : bagi(); break;
        case 3 : tambah(); break;
        case 4 : kurang(); break;
        case 5 : system("cls");
                 goto *main();
        default : printf("Menu tidak tersedia");
    }
}
void menu_sincostan(){
     int pilih;
    printf("|-------------------------------|\n");
    printf("|     Ping Poro Lan Sudo        |\n");
    printf("|-------------------------------|\n");
    printf("|    1. Sin                     |\n");
    printf("|    2. Cos                     |\n");
    printf("|    3. Tan                     |\n");
    printf("|    4. Return ke menu awal     |\n");
    printf("|-------------------------------|\n");
    printf("Masukkan Pilihan anda : ");
    scanf("%d", &pilih);
    system("cls");

    switch(pilih){
        case 1 : sinus(); break;
        case 2 : cosinus(); break;
        case 3 : tangen(); break;
        case 4 : system("cls");
                 goto *main();
        default : printf("menu tidak tersedia");
    }
}
void menu_kel(){
    int pilih;
    printf("|-------------------------------|\n");
    printf("|    Keliling Bangun Datar      |\n");
    printf("|-------------------------------|\n");
    printf("|   1. Keliling Persegi         |\n");
    printf("|   2. Keliling Trapesium       |\n");
    printf("|   3. Keliling Layang-Layang   |\n");
    printf("|   4. Keliling Lingkaran       |\n");
    printf("|   5. Kembali ke menu awal     |\n");
    printf("|-------------------------------|\n");
    printf("Masukkan Pilihan anda : ");
    scanf("%d", &pilih);
    system("cls");

    switch(pilih){
        case 1 : kelpersegi(); break;
        case 2 : keltrapesium(); break;
        case 3 : kellayang(); break;
        case 4 : kellingkaran(); break;
        case 5 : system("cls");
                 goto *menu_kelluasvolume();
        default : printf("menu tidak tersedia");
    }
}
void menu_luas(){
    int pilih;
    printf("|-------------------------------|\n");
    printf("|      Luas Bangun Datar        |\n");
    printf("|-------------------------------|\n");
    printf("|  1. Luas Persegi              |\n");
    printf("|  2. Luas Trapesium            |\n");
    printf("|  3. Luas Layang-Layang        |\n");
    printf("|  4. Luas Lingkaran            |\n");
    printf("|  5. Kembali ke menu awal      |\n");
    printf("|-------------------------------|\n");
    printf("Masukkan Pilihan anda : ");
    scanf("%d", &pilih);
    system("cls");

    switch(pilih){
        case 1 : luaspersegi(); break;
        case 2 : luastrapesium(); break;
        case 3 : luaslayang(); break;
        case 4 : luaslingkaran(); break;
        case 5 : system("cls");
                 goto *menu_kelluasvolume();
        default : printf("menu tidak tersedia");
    }
}
void menu_volume(){
    int pilih;
    printf("|-------------------------------|\n");
    printf("|       Volume Bangun Datar     |\n");
    printf("|-------------------------------|\n");
    printf("|  1. Volume Kubus              |\n");
    printf("|  2. Volume Prima              |\n");
    printf("|  3. Volume Limas              |\n");
    printf("|  4. Volume bola               |\n");
    printf("|  5. Kembali ke menu awal      |\n");
    printf("|-------------------------------|\n");
    printf("Masukkan Pilihan anda : ");
    scanf("%d", &pilih);
    system("cls");

    switch(pilih){
        case 1 : volumekubus(); break;
        case 2 : volumeprisma(); break;
        case 3 : volumelimas(); break;
        case 4 : volumebola(); break;
        case 5 : system("cls");
                 goto *menu_kelluasvolume();
        default : printf("menu tidak tersedia");
    }
}
void menu_kelluasvolume(){
    int pilih;
    printf("|-------------------------------|\n");
    printf("|     Keliling Luas Volume      |\n");
    printf("|-------------------------------|\n");
    printf("|  1. Keliling Bangun Datar     |\n");
    printf("|  2. Luas Bangun Datar         |\n");
    printf("|  3. Volume Bangun Ruang       |\n");
    printf("|  4. Return ke Menu Awal       |\n");
    printf("|-------------------------------|\n");
    printf("Masukkan Pilihan anda : ");
    scanf("%d", &pilih);
    system("cls");

    switch(pilih){
        case 1 : menu_kel(); break;
        case 2 : menu_luas(); break;
        case 3 : menu_volume(); break;
        case 4 : system("cls");
                 goto *main();
        default : printf("menu tidak tersedia");
    }
}
void main(){
    int pilih;
    printf("|-------------------------------|\n");
    printf("|        Tugas Kalkulator       |\n");
    printf("|-------------------------------|\n");
    printf("|   1. PingPoroLanSudo          |\n");
    printf("|   2. SinCosTan                |\n");
    printf("|   3. Hitung Keliling dan Luas |\n");
    printf("|   4. Hitung Akar Kuadrat      |\n");
    printf("|   5. Exit                     |\n");
    printf("|-------------------------------|\n");
    printf("Masukkan pilihan anda : ");
    scanf("%d", &pilih);
    system("cls");

    switch(pilih){
        case 1 : menu_porosudo(); break;
        case 2 : menu_sincostan(); break;
        case 3 : menu_kelluasvolume(); break;
        case 4 : akar(); break;
        case 5 : printf("Anda Telah Keluar . . ."); break;
        default : printf("menu tidak tersedia");
    }
}

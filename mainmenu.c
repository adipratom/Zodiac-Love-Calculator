#include "loveheader.h"


//Fatma Putri R  	 - 1906381735
//Satriyo Adipratomo - 1906300845

int opt;

//fungsi main menu
void mainMenu()
{

	printf("\t\t==================================================================================\n");
    printf("\t\t[]  8888                                                     _ _                []\n");   
    printf("\t\t[]  8888                                                    | (_)               []\n");
    printf("\t\t[]  8888                                        _______   __| |_  __ _  ___     []\n");
    printf("\t\t[]  8888  ,adPPYba,  8b       d8  ,adPPYba,    |_  / _ \\ / _` | |/ _` |/ __|    []\n");
    printf("\t\t[]  8888 a8\"     \"8a `8b     d8' a8P_____88     / / (_) | (_| | | (_| | (__     []\n");
    printf("\t\t[]  8888 8b       d8  `8b   d8'  8PP\"\"\"\"\"\"\"    /___\\___/ \\__,_|_|\\__,_|\\___|    []\n");
    printf("\t\t[]  8888 \"8a,   ,a8\"   `8b,d8'   \"8b,   ,aa                                     []\n");
    printf("\t\t[]  8888  \"8a,a,a8\"    `8b,d8'   \"8b,   ,aa      C  A  L  C  U  L  T  O  R      []\n");
    printf("\t\t[]  8888                 \"8\"      `'\"Yaaa8\"                                     []\n");
    printf("\t\t[]  88888888888888                                                              []\n");
    printf("\t\t==================================================================================\n");
    Sleep(2000);

    MENU:
    system("cls");
    printf("\t\t   _______________________________________________________________________________\n");
    printf("\t\t /   \\                  Selamat datang ke Love Zodiac Calculator                  \\.\n");
    printf("\t\t|    |               ***********************************************               |.\n");
    printf("\t\t \\___|     Program Love Zodiac Calculator akan mendisplay Zodiak 2 orang dari      |.\n");
    printf("\t\t    .|     input tanggal dan bulan lahir yang dimasukkan. Kemudian program akan    |.\n");
    printf("\t\t    .|      mendisplay persentase kecocokan 2 orang berdasarkan Zodiak mereka!     |.\n");
    printf("\t\t    .|                                                                             |.\n");
    printf("\t\t    .| **************************************************************************  |.\n");
    printf("\t\t    .| MAIN MENU:                                                                  |.\n");
    printf("\t\t    .|                                                                             |.\n");
    printf("\t\t    .| 1. Input nama dan tanggal lahir                                             |.\n");
    printf("\t\t    .|                                                                             |.\n");
    printf("\t\t    .| 2. Lihat Zodiakmu                                                           |.\n");
    printf("\t\t    .|                                                                             |.\n");
    printf("\t\t    .| 3. Tingkat kecocokan                                                        |.\n");
    printf("\t\t    .|                                                                             |.\n");
    printf("\t\t    .| 4. Exit Program                                                             |.\n");
    printf("\t\t    .|   __________________________________________________________________________|__\n");
    printf("\t\t    .| /                                                                             /.\n");
    printf("\t\t    \\_/____________________________________________________________________________ /.\n\n");
    printf("\t\t                        Input pilihan menu dengan angka >> "),scanf("%d", &opt);
    switch (opt)
    {
        case 1:
            system("cls");
            nameInput();
            printf("\n\t\tTekan apa saja untuk kembali ke main menu!");
            getch();
            goto MENU;
            break;
        case 2:
            system("cls");
            showZodiac();
            printf("\n\n\t\tTekan apa saja untuk kembali ke main menu!");
            getch();
            goto MENU;
            break;
        case 3:
            system("cls");
            loveCalculator();
            printf("\n\t\t\tTekan apa saja untuk kembali ke main menu!");
            getch();
            goto MENU;
            break;
        case 4:
            system("cls");
            exitMessage();
            break;
        default:
        	system("cls");
        	printf("\n");
            printf("\t\t\t\t!! ERROR - ERROR - ERROR - ERROR - ERROR - ERROR - ERROR !! \n");
            printf("\t\t\t\t      Silahkan kembali ke main menu, tekan apa saja         \n");
            printf("\t\t\t\t!! ERROR - ERROR - ERROR - ERROR - ERROR - ERROR - ERROR !! \n");
            getch();
            goto MENU;
            break;
    }
}

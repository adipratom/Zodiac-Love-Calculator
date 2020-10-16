#include "loveheader.h"

int  x,y,d;
int  z[2];
int  tanggalLahir[2][2];
int  zodiacUser[2] = {0, 1};

char namaOrang[2][100];
char zodiak[12][100]={"Capricorn", "Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius"};
	
void nameInput(){

	for (x=0; x<2; x++)
	{
		system("cls");
		printf("<3 Silahkan masukan nama kamu dan pasanganmu <3\n");
		printf("1. Nama yang di-input hanya nama pertama saja\n");
		printf("   Misalnya Budiman Santoso, input Budi di kolom input\n");
		printf("2. Inputlah tanggal lahir dengan format dd/mm\n");
		printf("   misalnya 12 Oktober, maka input 12/10\n\n");
	
		if (x==0)
		{
			printf("\t\tMasukkan nama kamu  >> ");
			scanf("%s", &namaOrang[x]);
		
			printf("\t\tMasukkan tanggal lahirmu >> ");
			scanf("%d/%d", &tanggalLahir[x][0], &tanggalLahir[x][1]);	
		}
		
		else
		{
			printf("\t\tMasukkan nama pasanganmu  >> ");
			scanf("%s", &namaOrang[x]);
		
			printf("\t\tMasukkan tanggal lahir pasanganmu >> ");
			scanf("%d/%d", &tanggalLahir[x][0], &tanggalLahir[x][1]);	
		}
	}
	                  
	zodiacAssign(x);
	printf("\t\t\n");
	
	printf("\t\t\n\n");
	
	
	printf("\t\t\n\n\n\n");
	printf("\t\t======================================================================================\n");
	printf("\t\t=====================           $$$$         $$$$               ======================\n");
	printf("\t\t                              $$$$$$$$     $$$$$$$$\n");
	printf("\t\t                            $$$$$$$$$$$$ $$$$$$$$$$$$\n");
	printf("\t\t                            $$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t                           $$$$$$$$$$$$$$$$$$$$$$$$$$$\n"); 
	printf("\t\t        %s               $$$$$$$$$$$$$$$$$$$$$$$$$$$                   %s\n", namaOrang[0], namaOrang[1]);
	printf("\t\t        %d/%d                $$$$$$$$$$$$$$$$$$$$$$$$$                      %d/%d\n", tanggalLahir[0][0], tanggalLahir[0][1], tanggalLahir[1][0], tanggalLahir[1][1]);
	printf("\t\t        %s                 $$$$$$$$$$$$$$$$$$$$$$$                     %s\n", zodiak[zodiacAssign(zodiacUser[0])], zodiak[zodiacAssign(zodiacUser[1])]);
	printf("\t\t                               $$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t                                  $$$$$$$$$$$$$\n");
	printf("\t\t                                     $$$$$$$\n");
	printf("\t\t                                       $$$\n");
	printf("\t\t====================                    $                      ========================\n");
	printf("\t\t======================================================================================\n"); 
}

int zodiacAssign(int x){				
					if(tanggalLahir[x][1]==12 && tanggalLahir[x][0] >= 22 || tanggalLahir[x][1] == 1 && tanggalLahir[x][0] <= 19){  
						z[x]=1;
						return 0;
						//printf("Your Zodiac Sign based on your Birth date is Capricorn\n"); 
					}
					else if(tanggalLahir[x][1] ==1 && tanggalLahir[x][0] >= 20 || tanggalLahir[x][1] == 2 && tanggalLahir[x][0] <= 17)
					{  
						z[x]=2;
						//printf("Your Zodiac Sign based on your Birth date is Aquarius\n");
						return 1; 
					}
					else if(tanggalLahir[x][1] == 2 && tanggalLahir[x][0] >= 18 || tanggalLahir[x][1] == 3 && tanggalLahir[x][0] <= 19)
					{  
						z[x]=3;
						//printf("Your Zodiac Sign based on your Birth date is Pisces\n");  
						return 2;
					}
					else if(tanggalLahir[x][1] == 3 && tanggalLahir[x][0] >= 20 || tanggalLahir[x][1] == 4 && tanggalLahir[x][0] <= 19)
					{  
						z[x]=4;
						//printf("Your Zodiac Sign based on your Birth date is Aries\n");  
						return 3;
					}
					else if(tanggalLahir[x][1] == 4 && tanggalLahir[x][0] >= 20 || tanggalLahir[x][1] == 5 && tanggalLahir[x][0] <= 20)
					{  
						z[x]=5;
						//printf("Your Zodiac Sign based on your Birth date is Taurus\n");  
						return 4;
					}
					else if(tanggalLahir[x][1] == 5 && tanggalLahir[x][0] >= 21 || tanggalLahir[x][1] == 6 && tanggalLahir[x][0] <= 20)
					{  
						z[x]=6;
						//printf("Your Zodiac Sign based on your Birth date is Gemini\n");  
						return 5;
					}
					else if(tanggalLahir[x][1] == 6 && tanggalLahir[x][0] >= 21 || tanggalLahir[x][1] == 7 && tanggalLahir[x][0] <= 22)
					{  
						z[x]=7;
						//printf("Your Zodiac Sign based on your Birth date is Cancer\n"); 
						return 6; 
					}
					else if(tanggalLahir[x][1] == 7 && tanggalLahir[x][0] >= 23 || tanggalLahir[x][1] == 8 && tanggalLahir[x][0] <= 22)
					{  
						z[x]=8;
						return 7;
						//printf("Your Zodiac Sign based on your Birth date is Leo\n");  
					}
					else if(tanggalLahir[x][1] == 8 && tanggalLahir[x][0] >= 23 || tanggalLahir[x][1] == 9 && tanggalLahir[x][0] <= 22)
					{  
						z[x]=9;
						return 8;
						//printf("Your Zodiac Sign based on your Birth date is Virgo\n");  
					}
					else if(tanggalLahir[x][1] == 9 && tanggalLahir[x][0] >= 23 || tanggalLahir[x][1] == 10 && tanggalLahir[x][0] <= 22)
					{  
						z[x]=10;
						return 9;
						//printf("Your Zodiac Sign based on your Birth date is Libra\n");  
					}
					else if(tanggalLahir[x][1] == 10 && tanggalLahir[x][0] >= 23 || tanggalLahir[x][1] == 11 && tanggalLahir[x][0] <= 21)
					{  
						z[x]=11;
						return 10;
						//printf("Your Zodiac Sign based on your Birth date is Scorpio\n");  
					}
					else if(tanggalLahir[x][1] == 11 && tanggalLahir[x][0] >= 22 || tanggalLahir[x][1] == 12 && tanggalLahir[x][0] <= 21)
					{  
						z[x]=12;
						return 11;
						//printf("Your Zodiac Sign based on your Birth date is Sagittarius\n");  
					}
				}

void showZodiac()
{
	for(x=0; x<2; x++){
		for(y=0; y<12; y++){
			if(x == 0){
				if(zodiacAssign(zodiacUser[x] == y))
				{
					if(y == 0)
					{ 
						//capricorn
						printBinatang(y);
					}
					else if(y == 1)
					{ 
						//aquarius
						printBinatang(y);
					}
					else if(y == 2)
					{
						//pisces
						printBinatang(y);
					}
					else if(y == 3)
					{
						//aries
						printBinatang(y);
					}
					else if(y == 4)
					{
						//taurus
						printBinatang(y);
					}
					else if(y == 5)
					{
						//gemini
						printBinatang(y);
					}
					else if(y == 6)
					{
						//cancer
						printBinatang(y);
					}
					else if(y == 7)
					{
						//leo
						printBinatang(y);
					}
					else if(y == 8)
					{
						//virgo
						printBinatang(y);
					}
					else if(y == 9)
					{
						//libra
						printBinatang(y);
					}
					else if(y == 10)
					{
						//scorpio
						printBinatang(y);
					}
					else if(y == 11)
					{
						//sagittarius
						printBinatang(y);
					}
				}
			printf("Zodiak kamu adalah %s", zodiak[zodiacAssign(zodiacUser[x])]);		
			}
			
				
			else{
				if(zodiacAssign(zodiacUser[x] == y)){
					if(y == 0)
					{ 
						//capricorn
						printBinatang(y);
					}
					else if(y == 1)
					{ 
						//aquarius
						printBinatang(y);
					}
					else if(y == 2)
					{
						//pisces
						printBinatang(y);
					}
					else if(y == 3)
					{
						//aries
						printBinatang(y);
					}
					else if(y == 4)
					{
						//taurus
						printBinatang(y);
					}
					else if(y == 5)
					{
						//gemini
						printBinatang(y);
					}
					else if(y == 6)
					{
						//cancer
						printBinatang(y);
					}
					else if(y == 7)
					{
						//leo
						printBinatang(y);
					}
					else if(y == 8)
					{
						//virgo
						printBinatang(y);
					}
					else if(y == 9)
					{
						//libra
						printBinatang(y);
					}
					else if(y == 10)
					{
						//scorpio
						printBinatang(y);
					}
					else if(y == 11)
					{
						//sagittarius
						printBinatang(y);
					}	
				}
				printf("Zodiak pasanganmu adalah %s", zodiak[zodiacAssign(zodiacUser[x])]);
			}
		}	
	}
}
	
void printBinatang(int y)
{
	if(y==0)
	{
		printf("gambar capricorn");
	}
	else
	{
		printf("pokoknya ada bro");
	}
}

void loveCalculator()
{
	srand(time(0));
    for(x=0; x<1; x++)
    {
        if(z[x]==6&&z[x+1]==11 || z[x]==7&&z[x+1]==2 || z[x]==11&&z[x+1]==12 || z[x+1]==6&&z[x]==11 || z[x+1]==7&&z[x]==2 || z[x+1]==11&&z[x]==12)
        {
            d = rand()%11+20;
            printf("\033[0;35m");
            printf("\t\t     $$$$         $$$$      \n");
            printf("\t\t   $$$$$$$$     $$$$$$$$    \n");
            printf("\t\t $$$$$$$$$$$$ $$$$$$$$$$$$  \n");
            printf("\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
            printf("\t\t$$$$$ \033[0;33mTHE COMPABILITY\033[0;35m $$$$$ \n");
            printf("\t\t $$$$$$ \033[0;33mOF YOU TWO\033[0;35m $$$$$$$  \n");
            printf("\t\t  $$$$$$$ \033[0;33mIS %d%%\033[0;35m $$$$$$$   \n", d);
            printf("\t\t    $$$$$$$$$$$$$$$$$$$     \n");
            printf("\t\t      $$$$$$$$$$$$$$$       \n");
            printf("\t\t        $$$$$$$$$$$         \n");
            printf("\t\t          $$$$$$$           \n");
            printf("\t\t            $$$             \n");
            printf("\t\t             $              \n");
            printf("\033[0m");
        }

        else if(z[x]==5&&z[x+1]==12 || z[x]==5&&z[x+1]==4 || z[x]==8&&z[x+1]==3 || z[x]==6&&z[x+1]==5 || z[x]==7&&z[x+1]==8 || z[x]==8&&z[x+1]==1 || z[x]==9&&z[x+1]==8 || z[x]==9&&z[x+1]==2 || z[x]==11&&z[x+1]==10 || z[x+1]==5&&z[x]==12 || z[x+1]==5&&z[x]==4 || z[x+1]==8&&z[x]==3 || z[x+1]==6&&z[x]==5 || z[x+1]==7&&z[x]==8 || z[x+1]==8&&z[x]==1 || z[x+1]==9&&z[x]==8 || z[x+1]==9&&z[x]==2 || z[x+1]==11&&z[x]==10)
        {
            d = rand()%11+30;
            printf("\033[0;35m");
            printf("\t\t     $$$$         $$$$      \n");
            printf("\t\t   $$$$$$$$     $$$$$$$$    \n");
            printf("\t\t $$$$$$$$$$$$ $$$$$$$$$$$$  \n");
            printf("\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
            printf("\t\t$$$$$ \033[0;33mTHE COMPABILITY\033[0;35m $$$$$ \n");
            printf("\t\t $$$$$$ \033[0;33mOF YOU TWO\033[0;35m $$$$$$$  \n");
            printf("\t\t  $$$$$$$ \033[0;33mIS %d%%\033[0;35m $$$$$$$   \n", d);
            printf("\t\t    $$$$$$$$$$$$$$$$$$$     \n");
            printf("\t\t      $$$$$$$$$$$$$$$       \n");
            printf("\t\t        $$$$$$$$$$$         \n");
            printf("\t\t          $$$$$$$           \n");
            printf("\t\t            $$$             \n");
            printf("\t\t             $              \n");
            printf("\033[0m");
        }
        
        else if(z[x]==4 && z[x+1]==7 || z[x]==1 &&z[x+1]==4 || z[x]==2&&z[x+1]==3 || z[x]==7&&z[x+1]==10 || z[x]==8&&z[x+1]==8 || z[x]==12&&z[x+1]==9 || z[x]==12&&z[x+1]==12 || z[x]==2&&z[x+1]==2 || z[x+1]==4 && z[x]==7 || z[x+1]==1 &&z[x]==4 || z[x+1]==2&&z[x]==3 || z[x+1]==7&&z[x]==10 || z[x+1]==8&&z[x]==8 || z[x+1]==12&&z[x]==9 || z[x+1]==12&&z[x]==12 || z[x+1]==2&&z[x]==2)
        {
            d = rand()%11+40;
            printf("\033[0;35m");
            printf("\t\t     $$$$         $$$$      \n");
            printf("\t\t   $$$$$$$$     $$$$$$$$    \n");
            printf("\t\t $$$$$$$$$$$$ $$$$$$$$$$$$  \n");
            printf("\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
            printf("\t\t$$$$$ \033[0;33mTHE COMPABILITY\033[0;35m $$$$$ \n");
            printf("\t\t $$$$$$ \033[0;33mOF YOU TWO\033[0;35m $$$$$$$  \n");
            printf("\t\t  $$$$$$$ \033[0;33mIS %d%%\033[0;35m $$$$$$$   \n", d);
            printf("\t\t    $$$$$$$$$$$$$$$$$$$     \n");
            printf("\t\t      $$$$$$$$$$$$$$$       \n");
            printf("\t\t        $$$$$$$$$$$         \n");
            printf("\t\t          $$$$$$$           \n");
            printf("\t\t            $$$             \n");
            printf("\t\t             $              \n");
            printf("\033[0m");
        }
    
        else if(z[x]==4&&z[x+1]==4 ||  z[x]==4&&z[x+1]==11 || z[x]==3&&z[x+1]==6 || z[x]==2&&z[x+1]==5 || z[x]==12&&z[x+1]==7 || z[x]==8&&z[x+1]==11 || z[x]==1 &&z[x+1]==10 || z[x+1]==4&&z[x]==4 ||  z[x+1]==4&&z[x]==11 || z[x+1]==3&&z[x]==6 || z[x+1]==2&&z[x]==5 || z[x+1]==12&&z[x]==7 || z[x+1]==8&&z[x]==11 || z[x+1]==1 &&z[x]==10)
        {
            d = rand()%11+50;
            printf("\033[0;35m");
            printf("\t\t     $$$$         $$$$      \n");
            printf("\t\t   $$$$$$$$     $$$$$$$$    \n");
            printf("\t\t $$$$$$$$$$$$ $$$$$$$$$$$$  \n");
            printf("\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
            printf("\t\t$$$$$ \033[0;33mTHE COMPABILITY\033[0;35m $$$$$ \n");
            printf("\t\t $$$$$$ \033[0;33mOF YOU TWO\033[0;35m $$$$$$$  \n");
            printf("\t\t  $$$$$$$ \033[0;33mIS %d%%\033[0;35m $$$$$$$   \n", d);
            printf("\t\t    $$$$$$$$$$$$$$$$$$$     \n");
            printf("\t\t      $$$$$$$$$$$$$$$       \n");
            printf("\t\t        $$$$$$$$$$$         \n");
            printf("\t\t          $$$$$$$           \n");
            printf("\t\t            $$$             \n");
            printf("\t\t             $              \n");
            printf("\033[0m");
        }
    
        else if(z[x]==9&&z[x+1]==4 || z[x]==4&&z[x+1]==3 || z[x]==12&&z[x+1]==3 || z[x]==3&&z[x+1]==3 || z[x]==5&&z[x+1]==5 || z[x]==5&&z[x+1]==10 || z[x]==6&&z[x+1]==6 || z[x]==7&&z[x+1]==6 || z[x]==6&&z[x+1]==9 || z[x]==12&&z[x+1]==6 || z[x]==1 &&z[x+1]==6 || z[x]==2&&z[x+1]==8 || z[x]==9&&z[x+1]==9 || z[x]==9&&z[x+1]==10 || z[x]==1 &&z[x+1]==12 || z[x]==1 &&z[x+1]==2 || z[x+1]==9&&z[x]==4 || z[x+1]==4&&z[x]==3 || z[x+1]==12&&z[x]==3 || z[x+1]==3&&z[x]==3 || z[x+1]==5&&z[x]==5 || z[x+1]==5&&z[x]==10 || z[x+1]==6&&z[x]==6 || z[x+1]==7&&z[x]==6 || z[x+1]==6&&z[x]==9 || z[x+1]==12&&z[x]==6 || z[x+1]==1 &&z[x]==6 || z[x+1]==2&&z[x]==8 || z[x+1]==9&&z[x]==9 || z[x+1]==9&&z[x]==10 || z[x+1]==1 &&z[x]==12 || z[x+1]==1 &&z[x]==2)
        {
            d = rand()%11+60;
            printf("\033[0;35m");
            printf("\t\t     $$$$         $$$$      \n");
            printf("\t\t   $$$$$$$$     $$$$$$$$    \n");
            printf("\t\t $$$$$$$$$$$$ $$$$$$$$$$$$  \n");
            printf("\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
            printf("\t\t$$$$$ \033[0;33mTHE COMPABILITY\033[0;35m $$$$$ \n");
            printf("\t\t $$$$$$ \033[0;33mOF YOU TWO\033[0;35m $$$$$$$  \n");
            printf("\t\t  $$$$$$$ \033[0;33mIS %d%%\033[0;35m $$$$$$$   \n", d);
            printf("\t\t    $$$$$$$$$$$$$$$$$$$     \n");
            printf("\t\t      $$$$$$$$$$$$$$$       \n");
            printf("\t\t        $$$$$$$$$$$         \n");
            printf("\t\t          $$$$$$$           \n");
            printf("\t\t            $$$             \n");
            printf("\t\t             $              \n");
            printf("\033[0m");
        }

        else if(z[x]==2&&z[x+1]==4 || z[x]==5&&z[x+1]==8|| z[x]==7&&z[x+1]==7 || z[x]==10&&z[x+1]==10 || z[x]==10&&z[x+1]==12 || z[x]==11&&z[x+1]==2 || z[x]==1 &&z[x+1]==1 || z[x+1]==2&&z[x]==4 || z[x+1]==5&&z[x]==8|| z[x+1]==7&&z[x]==7 || z[x+1]==10&&z[x]==10 || z[x+1]==10&&z[x]==12 || z[x+1]==11&&z[x]==2 || z[x+1]==1 &&z[x]==1)
        {
            d = rand()%11+70;
            printf("\033[0;35m");
            printf("\t\t     $$$$         $$$$      \n");
            printf("\t\t   $$$$$$$$     $$$$$$$$    \n");
            printf("\t\t $$$$$$$$$$$$ $$$$$$$$$$$$  \n");
            printf("\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
            printf("\t\t$$$$$ \033[0;33mTHE COMPABILITY\033[0;35m $$$$$ \n");
            printf("\t\t $$$$$$ \033[0;33mOF YOU TWO\033[0;35m $$$$$$$  \n");
            printf("\t\t  $$$$$$$ \033[0;33mIS %d%%\033[0;35m $$$$$$$   \n", d);
            printf("\t\t    $$$$$$$$$$$$$$$$$$$     \n");
            printf("\t\t      $$$$$$$$$$$$$$$       \n");
            printf("\t\t        $$$$$$$$$$$         \n");
            printf("\t\t          $$$$$$$           \n");
            printf("\t\t            $$$             \n");
            printf("\t\t             $              \n");
            printf("\033[0m");
        }

        else if(z[x]==4&&z[x+1]==6 || z[x]==1 &&z[x+1]==7 || z[x]==10&&z[x+1]==4 || z[x]==5&&z[x+1]==3 || z[x]==2&&z[x+1]==6 || z[x]==3&&z[x+1]==9 || z[x]==3&&z[x+1]==10 || z[x]==3&&z[x+1]==1 || z[x]==11&&z[x+1]==5 || z[x]==11&&z[x+1]==9 || z[x]==8&&z[x+1]==6 || z[x]==7-z[x+1]==3 || z[x+1]==4&&z[x]==6 || z[x+1]==1 &&z[x]==7 || z[x+1]==10&&z[x]==4 || z[x+1]==5&&z[x]==3 || z[x+1]==2&&z[x]==6 || z[x+1]==3&&z[x]==9 || z[x+1]==3&&z[x]==10 || z[x+1]==3&&z[x]==1 || z[x+1]==11&&z[x]==5 || z[x+1]==11&&z[x]==9 || z[x+1]==8&&z[x]==6 || z[x+1]==7-z[x]==3)
        {
            d = rand()%11+80;
            printf("\033[0;35m");
            printf("\t\t     $$$$         $$$$      \n");
            printf("\t\t   $$$$$$$$     $$$$$$$$    \n");
            printf("\t\t $$$$$$$$$$$$ $$$$$$$$$$$$  \n");
            printf("\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
            printf("\t\t$$$$$ \033[0;33mTHE COMPABILITY\033[0;35m $$$$$ \n");
            printf("\t\t $$$$$$ \033[0;33mOF YOU TWO\033[0;35m $$$$$$$  \n");
            printf("\t\t  $$$$$$$ \033[0;33mIS %d%%\033[0;35m $$$$$$$   \n", d);
            printf("\t\t    $$$$$$$$$$$$$$$$$$$     \n");
            printf("\t\t      $$$$$$$$$$$$$$$       \n");
            printf("\t\t        $$$$$$$$$$$         \n");
            printf("\t\t          $$$$$$$           \n");
            printf("\t\t            $$$             \n");
            printf("\t\t             $              \n");
            printf("\033[0m");
        }

        else if(z[x]==5&&z[x+1]==9 || z[x]==7&&z[x+1]==9 || z[x]==2&&z[x+1]==10 || z[x]==2&&z[x+1]==12 || z[x]==12&&z[x+1]==4 || z[x]==6&&z[x+1]==10 || z[x]==8&&z[x+1]==12 || z[x]==11&&z[x+1]==7 || z[x]==9&&z[x+1]==1 || z[x]==1 &&z[x+1]==11 ||  z[x]==8&&z[x+1]==4 || z[x]==7&&z[x+1]==5 || z[x]==4&&z[x+1]==8 || z[x]==8&&z[x+1]==10 || z[x]==11&&z[x+1]==3 || z[x]==3&&z[x+1]==7 || z[x]==1 &&z[x+1]==5 || z[x+1]==5&&z[x]==9 || z[x+1]==7&&z[x]==9 || z[x+1]==2&&z[x]==10 || z[x+1]==2&&z[x]==12 || z[x+1]==12&&z[x]==4 || z[x+1]==6&&z[x]==10 || z[x+1]==8&&z[x]==12 || z[x+1]==11&&z[x]==7 || z[x+1]==9&&z[x]==1 || z[x+1]==1 &&z[x]==11 ||  z[x+1]==8&&z[x]==4 || z[x+1]==7&&z[x]==5 || z[x+1]==4&&z[x]==8 || z[x+1]==8&&z[x]==10 || z[x+1]==11&&z[x]==3 || z[x+1]==3&&z[x]==7 || z[x+1]==1 &&z[x]==5)
        {
            d = rand()%10+90;
            printf("\033[0;35m");
            printf("\t\t     $$$$         $$$$      \n");
            printf("\t\t   $$$$$$$$     $$$$$$$$    \n");
            printf("\t\t $$$$$$$$$$$$ $$$$$$$$$$$$  \n");
            printf("\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
            printf("\t\t$$$$$ \033[0;33mTHE COMPABILITY\033[0;35m $$$$$ \n");
            printf("\t\t $$$$$$ \033[0;33mOF YOU TWO\033[0;35m $$$$$$$  \n");
            printf("\t\t  $$$$$$$ \033[0;33mIS %d%%\033[0;35m $$$$$$$   \n", d);
            printf("\t\t    $$$$$$$$$$$$$$$$$$$     \n");
            printf("\t\t      $$$$$$$$$$$$$$$       \n");
            printf("\t\t        $$$$$$$$$$$         \n");
            printf("\t\t          $$$$$$$           \n");
            printf("\t\t            $$$             \n");
            printf("\t\t             $              \n");
            printf("\033[0m");
        }
    }
}

#include "loveheader.h"

//Fatma Putri R  	 - 1906381735
//Satriyo Adipratomo - 1906300845


//deklarasi variabel variabel
int  x,y,d,enable,viewopt;
int  z[2];
int  tanggalLahir[2][2];
int  zodiacUser[2] = {0, 1};

//array untuk input nama
char namaOrang[2][100];
//array untuk memanggil nama zodiak setelah diproses fungsi
char zodiak[12][100]={"Capricorn", "Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius"};

//fungsi yang menerima input nama dari user	
void nameInput(){
	enable=1;//untuk error handling, saat user belum input nama dan tanggal lahir akan dioper ke error handling di tiap fungsi
	for (x=0; x<2; x++)
	{
		system("cls");
		printf("\t\t*******************************************************\n\n");
		printf("\t\t<3 Silahkan masukan nama kamu dan pasanganmu <3\n\n");
		printf("\t\t1. Nama yang di-input hanya nama pertama saja\n");
		printf("\t\t   Misalnya Budiman Santoso, input Budi di kolom input\n");
		printf("\t\t2. Inputlah tanggal lahir dengan format dd/mm\n");
		printf("\t\t   misalnya 12 Oktober, maka input 12/10\n\n");
		printf("\t\t*******************************************************\n\n");
	
		if (x==0)
		{
			printf("\t\tMasukkan nama kamu       >> ");
			scanf("%s", &namaOrang[x]);
		
			printf("\t\tMasukkan tanggal lahirmu >> ");
			scanf("%d/%d", &tanggalLahir[x][0], &tanggalLahir[x][1]);
			
			while(tanggalLahir[x][0]>31 || tanggalLahir[x][0]<1 && tanggalLahir[x][1]>12 || tanggalLahir[x][1]<1)
			{
				printf("\t\tTanggal tidak valid silahkan input tanggal lahir kembali >> ");
				scanf("%d/%d", &tanggalLahir[x][0], &tanggalLahir[x][1]);
			}
		}
		//digunakan
		else
		{
			printf("\t\tMasukkan nama pasanganmu  >> ");
			scanf("%s", &namaOrang[x]);
		
			printf("\t\tMasukkan tanggal lahir    >> ");
			scanf("%d/%d", &tanggalLahir[x][0], &tanggalLahir[x][1]);
			
			while(tanggalLahir[x][0]>31 || tanggalLahir[x][0]<1 && tanggalLahir[x][1]>12 || tanggalLahir[x][1]<1)
			{
				printf("\t\tTanggal tidak valid silahkan input tanggal lahir kembali >> ");
				scanf("%d/%d", &tanggalLahir[x][0], &tanggalLahir[x][1]);
			}
		}
	
	}
	system("cls");
	//display dari input user
	system("cls");
	printf("\t\t\n\n\n");
	printf("\t\t                            %s -- %d/%d -- %s\n\n", namaOrang[0], tanggalLahir[0][0], tanggalLahir[0][1], zodiak[zodiacAssign(zodiacUser[0])]);
	printf("\t\t=====================\033[0;35m           $$$$         $$$$              \033[0m=======================	\n");
	printf("\t\t\033[0;35m                              $$$$$$$$     $$$$$$$$                                   	\n");
	printf("\t\t                            $$$$$$$$$$$$ $$$$$$$$$$$$\n");
	printf("\t\t                            $$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t                           $$$$$$$$$$$$$$$$$$$$$$$$$$$\n"); 
	printf("\t\t                           $$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t                            $$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t                             $$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t                               $$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t                                  $$$$$$$$$$$$$\n");
	printf("\t\t                                     $$$$$$$\n");
	printf("\t\t                                       $$$					  \033[0m\n");
	printf("\t\t====================\033[0;35m                    $                     \033[0m========================	\n\n");

	printf("\t\t                            %s -- %d/%d -- %s\n", namaOrang[1], tanggalLahir[1][0], tanggalLahir[1][1], zodiak[zodiacAssign(zodiacUser[1])]);
}
//fungsi untuk assign tanggal lahir yang di input oleh user ke z[x] sesuai index.
//fungsi ini mereturn angka ke array zodiak[] 
int zodiacAssign(int x){				
					if(tanggalLahir[x][1]==12 && tanggalLahir[x][0] >= 22 || tanggalLahir[x][1] == 1 && tanggalLahir[x][0] <= 19){  
						z[x]=1;
						return 0;
						//Capricorn
					}
					else if(tanggalLahir[x][1] ==1 && tanggalLahir[x][0] >= 20 || tanggalLahir[x][1] == 2 && tanggalLahir[x][0] <= 17)
					{  
						z[x]=2;
						//Aquarius
						return 1; 
					}
					else if(tanggalLahir[x][1] == 2 && tanggalLahir[x][0] >= 18 || tanggalLahir[x][1] == 3 && tanggalLahir[x][0] <= 19)
					{  
						z[x]=3;
						//Pisces  
						return 2;
					}
					else if(tanggalLahir[x][1] == 3 && tanggalLahir[x][0] >= 20 || tanggalLahir[x][1] == 4 && tanggalLahir[x][0] <= 19)
					{  
						z[x]=4;
						//Aries 
						return 3;
					}
					else if(tanggalLahir[x][1] == 4 && tanggalLahir[x][0] >= 20 || tanggalLahir[x][1] == 5 && tanggalLahir[x][0] <= 20)
					{  
						z[x]=5;
						//Taurus
						return 4;
					}
					else if(tanggalLahir[x][1] == 5 && tanggalLahir[x][0] >= 21 || tanggalLahir[x][1] == 6 && tanggalLahir[x][0] <= 20)
					{  
						z[x]=6;
						//Gemini
						return 5;
					}
					else if(tanggalLahir[x][1] == 6 && tanggalLahir[x][0] >= 21 || tanggalLahir[x][1] == 7 && tanggalLahir[x][0] <= 22)
					{  
						z[x]=7;
						//Cancer
						return 6; 
					}
					else if(tanggalLahir[x][1] == 7 && tanggalLahir[x][0] >= 23 || tanggalLahir[x][1] == 8 && tanggalLahir[x][0] <= 22)
					{  
						z[x]=8;
						return 7;
						//Leo
					}
					else if(tanggalLahir[x][1] == 8 && tanggalLahir[x][0] >= 23 || tanggalLahir[x][1] == 9 && tanggalLahir[x][0] <= 22)
					{  
						z[x]=9;
						return 8;
						//Virgo  
					}
					else if(tanggalLahir[x][1] == 9 && tanggalLahir[x][0] >= 23 || tanggalLahir[x][1] == 10 && tanggalLahir[x][0] <= 22)
					{  
						z[x]=10;
						return 9;
						//Libra 
					}
					else if(tanggalLahir[x][1] == 10 && tanggalLahir[x][0] >= 23 || tanggalLahir[x][1] == 11 && tanggalLahir[x][0] <= 21)
					{  
						z[x]=11;
						return 10;
						//Scorpio
					}
					else if(tanggalLahir[x][1] == 11 && tanggalLahir[x][0] >= 22 || tanggalLahir[x][1] == 12 && tanggalLahir[x][0] <= 21)
					{  
						z[x]=12;
						return 11;
						//Sagittarius
					}
				}

//fungsi untuk menunjukkan display zodiak dan karakteristiknya
void showZodiac()
{
	if(enable != 1){
		printf("\n\n\t\t !! ERROR - ERROR - ERROR - ERROR - ERROR - ERROR - ERROR !! ");
		printf("\n\t\t     Kamu belum memasukkan nama dan tanggal lahir :(\n");
		printf("\t\t  Kamu akan kembali ke main menu dalam 3 detik  ...\n");
		printf("\t\t !! ERROR - ERROR - ERROR - ERROR - ERROR - ERROR - ERROR !! \n");
		printf("\t\t                          ");
		for(d=0;d<3;d++)
		{
			printf(".");
	  		Sleep(1000);
 		}
		system("cls");
		mainMenu();		
	}

	for(x=0;x<2;x++){
		if(x == 0){
			printf("\n\n\t\t  Zodiakmu adalah %s \n", zodiak[zodiacAssign(zodiacUser[x])]);
			printBinatang(zodiacAssign(zodiacUser[x]));
		}
		else{
			printf("\n\n\t\t======================================================================\n\n\n");
			printf("\t\t  Zodiak pasanganmu adalah %s \n", zodiak[zodiacAssign(zodiacUser[x])]);
			printBinatang(zodiacAssign(zodiacUser[x]));
		}
	}
}

//fungsi display tiap zodiak yang akan dipanggil di fungsi void showZodiac()	
void printBinatang(int y)
{
	if(y==0)
	{
		//capricorn
		printf("\033[0;31m");
		printf("\t\t\t\t        _		\n");
		printf("\t\t\t\t\\      /_)     \n");
		printf("\t\t\t\t \\    /`.		\n");
		printf("\t\t\t\t  \\  /   ;		\n");
		printf("\t\t\t\t   \\/ __.'		\n");
		printf("\t\t\tSosok yang disiplin dan berpegang teguh. Memiliki\n");
		printf("\t\t\tsifat empati dan peduli terhadap orang lain.\n");
		printf("\t\t\tBerkomitmen yang kuat dalam hubungan");
		printf("\033[0m");
	}
	
	else if(y==1)
	{
		//aquarius
		printf("\033[0;36m");
		printf("\t\t\t  .-^-._.-^-._.-  \n\n");
		printf("\t\t\t    .-^-._.-^-._.- \n");
		printf("\t\t\tKreatif dan memiliki keingintahuan yang besar.\n");
		printf("\t\t\tSosok yang setia dalam menjalani hubungan.\n");
		printf("\t\t\tSering menunjukkan rasa sayang kepada pasangannya");
		printf("\033[0m");
	}
	
	else if(y==2)
	{
		//pisces
		printf("\033[1;36m");
		printf("\t\t\t\t `-.   .-'  \n");
		printf("\t\t\t\t   :  :	 \n");
		printf("\t\t\t\t --:--:--   \n");
		printf("\t\t\t\t   :  :     \n");
		printf("\t\t\t\t.-'    `-.  \n");
		printf("\t\t\tPribadi yang positif dan penuh motivasi untuk menggapai\n");
		printf("\t\t\tapa yang mereka mau. Sosokyang sensitif dan memiliki \n");
		printf("\t\t\tinuisi tajam sehinggaampu memahami pasangannya dengan baik.");
		printf("\033[0m");
	}
	
	else if(y==3)
	{
		//aries
		printf("\033[1;33m");
		printf("\t\t\t\t .-.   .-.  \n");
		printf("\t\t\t\t(_  \\ /  _)\n");
	  	printf("\t\t\t\t     |      \n");
		printf("\t\t\t\t     |      \n");
		printf("\t\t\tMemiliki sifat kepemimpinan. Karakternya berani,\n");
		printf("\t\t\ttegas, dan agresif. Tidak segan untuk\n");
		printf("\t\t\tmenunjukkan perjuangannya mendapatkan cinta.");
		printf("\033[0m");
	}
	
	else if(y==4)
	{
		//taurus
		printf("\033[1;31m");
		printf("\t\t\t\t .     .  \n");
    	printf("\t\t\t\t '.___.'  \n");   
    	printf("\t\t\t\t .'   `.  \n");
   		printf("\t\t\t\t:       : \n");
   		printf("\t\t\t\t:       : \n");
       	printf("\t\t\t\t `.___.'  \n");
       	printf("\t\t\tBerpegang teguh pada pendirian sehingga\n");
       	printf("\t\t\tselalu dapat diandalkan. Bukan orang yang\n");
       	printf("\t\t\tagresif, tetapi termasuk posesif.");
       	printf("\033[0m");
	}
		
	else if(y==5)
	{
		//gemini
		printf("\033[1;33m");
		printf("\t\t\t\t._____.  \n");
      	printf("\t\t\t\t  | |    \n");     
      	printf("\t\t\t\t  | |    \n");
     	printf("\t\t\t\t _|_|_   \n");
    	printf("\t\t\t\t'     '  \n");
    	printf("\t\t\tMemiliki pemikiran luas dan suka belajar\n");
    	printf("\t\t\thal baru. Sosok yang ramah dan terbuka.\n");
    	printf("\t\t\tTerbuka dan komunikatif terhadap pasangannya.");
    	printf("\033[0m");
	}
	
	else if(y==6)
	{
		//cancer
		printf("\033[0;31m");
		printf("\t\t\t\t   .--.   \n");
     	printf("\t\t\t\t  /   _`. \n");   
    	printf("\t\t\t\t (_) ( )  \n");
   		printf("\t\t\t\t'.    /   \n");
    	printf("\t\t\t\t  `--'    \n");
    	printf("\t\t\tDikenal sensitif dan emosional. Selalu bertanggung\n");
    	printf("\t\t\tjawab dengan pekerjaannya. Dalam percintaan, mereka\n");
    	printf("\t\t\tmemilih diperjuangkan daripada memperjuangkan.");
    	printf("\033[0m");
	}
	
	else if(y==7)
	{
		//leo
		printf("\033[1;32m");
		printf("\t\t\t\t  .--.   \n");
    	printf("\t\t\t\t (    )  \n");   
    	printf("\t\t\t\t(_)  /   \n");
     	printf("\t\t\t\t    (_,  \n");
     	printf("\t\t\tMemiliki karakter yang suka mendominasi dan\n");
     	printf("\t\t\tsifat kepemimpinan. Tidak segan untuk melakukan\n");
     	printf("\t\t\thal apapun untuk orang yang dia sayangi.");
     	printf("\033[0m");
	}
	
	else if(y==8)
	{
		
		//virgo
		printf("\033[1;36m");
		printf("\t\t\t\t _           \n");
		printf("\t\t\t\t' `:--.--.   \n");
		printf("\t\t\t\t   |  |  |_  \n");  
		printf("\t\t\t\t   |  |  | ) \n");
		printf("\t\t\t\t   |  |  |/  \n");
		printf("\t\t\t\t         (J   \n");
		printf("\t\t\tDikenal sebagai sosok yang detail, sederhana,\n");
		printf("\t\t\tdan bijak. Selalu berusaha untuk memberikan yang\n");
		printf("\t\t\tterbaik dan tidak mungkin bersikap kasar ke pasangannya.");
		printf("\033[0m");
	}
	
	else if(y==9)
	{
		//libra
		printf("\033[0;32m");
		printf("\t\t\t\t     __      \n");
		printf("\t\t\t\t___.'  '.___ \n");  
		printf("\t\t\t\t____________ \n");
		printf("\t\t\tBerhati-hati saat memutuskan suatu hal. Dikenal tenang\n");
		printf("\t\t\tdan memiliki kharisma. Menyukai hal-hal romantis \n");
		printf("\t\t\tdan tidak terlalu ingin menunjukkan rasa cintanya.");
		printf("\033[0m");
	}
	
	else if(y==10)
	{
		//scorpio
		printf("\033[0;33m");
		printf("\t\t\t\t _			 \n");
		printf("\t\t\t\t' `:--.--.	 \n");
		printf("\t\t\t\t   |  |  |  	 \n");   
		printf("\t\t\t\t   |  |  |	 \n");
		printf("\t\t\t\t   |  |  |  	 \n");
		printf("\t\t\t\t          `->  \n");
		printf("\t\t\tAmbisius dan suka kejujuran. Tidak mudah untuk\n");
		printf("\t\t\tjatuh cinta. Tetapi ketika sudah yakin dengan\n ");
		printf("\t\t\tpasangannya, akan memberikan berbagai perhatian.");
		printf("\033[0m");
	}
	
	else if(y==11)
	{
		//sagittarius
		printf("\033[1;35m");
		printf("\t\t\t\t       ...	\n");
		printf("\t\t\t\t      .':   \n"); 
		printf("\t\t\t\t    .'		\n");
		printf("\t\t\t\t`..'		\n");
		printf("\t\t\t\t.'`.		\n");
		printf("\t\t\tDikenal dengan pribadi yang kalau ngomong apa\n");
		printf("\t\t\tadanya. Punya sisi optimis danmandiri. Selalu setia\n");
		printf("\t\t\tdan memiliki sifat yang cemburuan terhadap pasangannya.");
		printf("\033[0m");
	}
}

//fungsi yang menghitung tingkat kecocokan dari dua orang berdasarkan zodiak
void loveCalculator()
{
	if(enable != 1){
		printf("\n\n\t\t\t !! ERROR - ERROR - ERROR - ERROR - ERROR - ERROR - ERROR !! ");
		printf("\n\t\t\t     Kamu belum memasukkan nama dan tanggal lahir :(\n");
		printf("\t\t\t  Kamu akan kembali ke main menu dalam 3 detik  ...\n");
		printf("\t\t\t !! ERROR - ERROR - ERROR - ERROR - ERROR - ERROR - ERROR !! \n");
		printf("\t\t\t                          ");
		for(d=0;d<3;d++)
		{
			printf(".");
	  		Sleep(1000);
 		}
		system("cls");
		mainMenu();		
	}
	
	srand(time(0));
	printf("\n\n\n\t\t\t--LOADING -- LOADING -- LOADING -- LOADING --");
	printf("\n\t\t\t          Menghitung kecocokan ");
	for(d=0;d<3;d++)
	{
		printf(".");
	  	Sleep(500);
 	}
	printf("\n\t\t\t--LOADING -- LOADING -- LOADING -- LOADING --");
	printf("\n"); 
 	system("cls");
 	
    for(x=0; x<1; x++)
    {
        if(z[x]==6&&z[x+1]==11 || z[x]==7&&z[x+1]==2 || z[x]==11&&z[x+1]==12 || z[x+1]==6&&z[x]==11 || z[x+1]==7&&z[x]==2 || z[x+1]==11&&z[x]==12)//argumen zodiak-zodiak yang dipasangkan
        {
            d = rand()%11+20;//fungsi yang merandom persentase tingkat kecocokan dari zodiak di argumen if
            printf("\033[0;35m");
            printf("\t\t\t\t     $$$$         $$$$      \n");
            printf("\t\t\t\t   $$$$$$$$     $$$$$$$$    \n");
            printf("\t\t\t\t $$$$$$$$$$$$ $$$$$$$$$$$$  \n");
            printf("\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
            printf("\t\t\t\t$$$$$ \033[0;33mTHE COMPABILITY\033[0;35m $$$$$ \n");
            printf("\t\t\t\t $$$$$$ \033[0;33mOF YOU TWO\033[0;35m $$$$$$$  \n");
            printf("\t\t\t\t  $$$$$$$ \033[0;33mIS %d%%\033[0;35m $$$$$$$   \n", d);
            printf("\t\t\t\t    $$$$$$$$$$$$$$$$$$$     \n");
            printf("\t\t\t\t      $$$$$$$$$$$$$$$       \n");
            printf("\t\t\t\t        $$$$$$$$$$$         \n");
            printf("\t\t\t\t          $$$$$$$           \n");
            printf("\t\t\t\t            $$$             \n");
            printf("\t\t\t\t             $              \n");
            printf("\033[0m");
        }

        else if(z[x]==5&&z[x+1]==12 || z[x]==5&&z[x+1]==4 || z[x]==8&&z[x+1]==3 || z[x]==6&&z[x+1]==5 || z[x]==7&&z[x+1]==8 || z[x]==8&&z[x+1]==1 || z[x]==9&&z[x+1]==8 || z[x]==9&&z[x+1]==2 || z[x]==11&&z[x+1]==10 || z[x+1]==5&&z[x]==12 || z[x+1]==5&&z[x]==4 || z[x+1]==8&&z[x]==3 || z[x+1]==6&&z[x]==5 || z[x+1]==7&&z[x]==8 || z[x+1]==8&&z[x]==1 || z[x+1]==9&&z[x]==8 || z[x+1]==9&&z[x]==2 || z[x+1]==11&&z[x]==10)
        {
            d = rand()%11+30;
            printf("\033[0;35m");
            printf("\t\t\t\t     $$$$         $$$$      \n");
            printf("\t\t\t\t   $$$$$$$$     $$$$$$$$    \n");
            printf("\t\t\t\t $$$$$$$$$$$$ $$$$$$$$$$$$  \n");
            printf("\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
            printf("\t\t\t\t$$$$$ \033[0;33mTHE COMPABILITY\033[0;35m $$$$$ \n");
            printf("\t\t\t\t $$$$$$ \033[0;33mOF YOU TWO\033[0;35m $$$$$$$  \n");
            printf("\t\t\t\t  $$$$$$$ \033[0;33mIS %d%%\033[0;35m $$$$$$$   \n", d);
            printf("\t\t\t\t    $$$$$$$$$$$$$$$$$$$     \n");
            printf("\t\t\t\t      $$$$$$$$$$$$$$$       \n");
            printf("\t\t\t\t        $$$$$$$$$$$         \n");
            printf("\t\t\t\t          $$$$$$$           \n");
            printf("\t\t\t\t            $$$             \n");
            printf("\t\t\t\t             $              \n");
            printf("\033[0m");
        }
        
        else if(z[x]==4 && z[x+1]==7 || z[x]==1 &&z[x+1]==4 || z[x]==2&&z[x+1]==3 || z[x]==7&&z[x+1]==10 || z[x]==8&&z[x+1]==8 || z[x]==12&&z[x+1]==9 || z[x]==12&&z[x+1]==12 || z[x]==2&&z[x+1]==2 || z[x+1]==4 && z[x]==7 || z[x+1]==1 &&z[x]==4 || z[x+1]==2&&z[x]==3 || z[x+1]==7&&z[x]==10 || z[x+1]==8&&z[x]==8 || z[x+1]==12&&z[x]==9 || z[x+1]==12&&z[x]==12 || z[x+1]==2&&z[x]==2)
        {
            d = rand()%11+40;
            printf("\033[0;35m");
            printf("\t\t\t\t     $$$$         $$$$      \n");
            printf("\t\t\t\t   $$$$$$$$     $$$$$$$$    \n");
            printf("\t\t\t\t $$$$$$$$$$$$ $$$$$$$$$$$$  \n");
            printf("\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
            printf("\t\t\t\t$$$$$ \033[0;33mTHE COMPABILITY\033[0;35m $$$$$ \n");
            printf("\t\t\t\t $$$$$$ \033[0;33mOF YOU TWO\033[0;35m $$$$$$$  \n");
            printf("\t\t\t\t  $$$$$$$ \033[0;33mIS %d%%\033[0;35m $$$$$$$   \n", d);
            printf("\t\t\t\t    $$$$$$$$$$$$$$$$$$$     \n");
            printf("\t\t\t\t      $$$$$$$$$$$$$$$       \n");
            printf("\t\t\t\t        $$$$$$$$$$$         \n");
            printf("\t\t\t\t          $$$$$$$           \n");
            printf("\t\t\t\t            $$$             \n");
            printf("\t\t\t\t             $              \n");
            printf("\033[0m");
        }
    
        else if(z[x]==4&&z[x+1]==4 ||  z[x]==4&&z[x+1]==11 || z[x]==3&&z[x+1]==6 || z[x]==2&&z[x+1]==5 || z[x]==12&&z[x+1]==7 || z[x]==8&&z[x+1]==11 || z[x]==1 &&z[x+1]==10 || z[x+1]==4&&z[x]==4 ||  z[x+1]==4&&z[x]==11 || z[x+1]==3&&z[x]==6 || z[x+1]==2&&z[x]==5 || z[x+1]==12&&z[x]==7 || z[x+1]==8&&z[x]==11 || z[x+1]==1 &&z[x]==10)
        {
            d = rand()%11+50;
            printf("\033[0;35m");
            printf("\t\t\t\t     $$$$         $$$$      \n");
            printf("\t\t\t\t   $$$$$$$$     $$$$$$$$    \n");
            printf("\t\t\t\t $$$$$$$$$$$$ $$$$$$$$$$$$  \n");
            printf("\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
            printf("\t\t\t\t$$$$$ \033[0;33mTHE COMPABILITY\033[0;35m $$$$$ \n");
            printf("\t\t\t\t $$$$$$ \033[0;33mOF YOU TWO\033[0;35m $$$$$$$  \n");
            printf("\t\t\t\t  $$$$$$$ \033[0;33mIS %d%%\033[0;35m $$$$$$$   \n", d);
            printf("\t\t\t\t    $$$$$$$$$$$$$$$$$$$     \n");
            printf("\t\t\t\t      $$$$$$$$$$$$$$$       \n");
            printf("\t\t\t\t        $$$$$$$$$$$         \n");
            printf("\t\t\t\t          $$$$$$$           \n");
            printf("\t\t\t\t            $$$             \n");
            printf("\t\t\t\t             $              \n");
            printf("\033[0m");
        }
    
        else if(z[x]==9&&z[x+1]==4 || z[x]==4&&z[x+1]==3 || z[x]==12&&z[x+1]==3 || z[x]==3&&z[x+1]==3 || z[x]==5&&z[x+1]==5 || z[x]==5&&z[x+1]==10 || z[x]==6&&z[x+1]==6 || z[x]==7&&z[x+1]==6 || z[x]==6&&z[x+1]==9 || z[x]==12&&z[x+1]==6 || z[x]==1 &&z[x+1]==6 || z[x]==2&&z[x+1]==8 || z[x]==9&&z[x+1]==9 || z[x]==9&&z[x+1]==10 || z[x]==1 &&z[x+1]==12 || z[x]==1 &&z[x+1]==2 || z[x+1]==9&&z[x]==4 || z[x+1]==4&&z[x]==3 || z[x+1]==12&&z[x]==3 || z[x+1]==3&&z[x]==3 || z[x+1]==5&&z[x]==5 || z[x+1]==5&&z[x]==10 || z[x+1]==6&&z[x]==6 || z[x+1]==7&&z[x]==6 || z[x+1]==6&&z[x]==9 || z[x+1]==12&&z[x]==6 || z[x+1]==1 &&z[x]==6 || z[x+1]==2&&z[x]==8 || z[x+1]==9&&z[x]==9 || z[x+1]==9&&z[x]==10 || z[x+1]==1 &&z[x]==12 || z[x+1]==1 &&z[x]==2)
        {
            d = rand()%11+60;
            printf("\033[0;35m");
            printf("\t\t\t\t     $$$$         $$$$      \n");
            printf("\t\t\t\t   $$$$$$$$     $$$$$$$$    \n");
            printf("\t\t\t\t $$$$$$$$$$$$ $$$$$$$$$$$$  \n");
            printf("\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
            printf("\t\t\t\t$$$$$ \033[0;33mTHE COMPABILITY\033[0;35m $$$$$ \n");
            printf("\t\t\t\t $$$$$$ \033[0;33mOF YOU TWO\033[0;35m $$$$$$$  \n");
            printf("\t\t\t\t  $$$$$$$ \033[0;33mIS %d%%\033[0;35m $$$$$$$   \n", d);
            printf("\t\t\t\t    $$$$$$$$$$$$$$$$$$$     \n");
            printf("\t\t\t\t      $$$$$$$$$$$$$$$       \n");
            printf("\t\t\t\t        $$$$$$$$$$$         \n");
            printf("\t\t\t\t          $$$$$$$           \n");
            printf("\t\t\t\t            $$$             \n");
            printf("\t\t\t\t             $              \n");
            printf("\033[0m");
        }

        else if(z[x]==2&&z[x+1]==4 || z[x]==5&&z[x+1]==8|| z[x]==7&&z[x+1]==7 || z[x]==10&&z[x+1]==10 || z[x]==10&&z[x+1]==12 || z[x]==11&&z[x+1]==2 || z[x]==1 &&z[x+1]==1 || z[x+1]==2&&z[x]==4 || z[x+1]==5&&z[x]==8|| z[x+1]==7&&z[x]==7 || z[x+1]==10&&z[x]==10 || z[x+1]==10&&z[x]==12 || z[x+1]==11&&z[x]==2 || z[x+1]==1 &&z[x]==1)
        {
            d = rand()%11+70;
            printf("\033[0;35m");
            printf("\t\t\t\t     $$$$         $$$$      \n");
            printf("\t\t\t\t   $$$$$$$$     $$$$$$$$    \n");
            printf("\t\t\t\t $$$$$$$$$$$$ $$$$$$$$$$$$  \n");
            printf("\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
            printf("\t\t\t\t$$$$$ \033[0;33mTHE COMPABILITY\033[0;35m $$$$$ \n");
            printf("\t\t\t\t $$$$$$ \033[0;33mOF YOU TWO\033[0;35m $$$$$$$  \n");
            printf("\t\t\t\t  $$$$$$$ \033[0;33mIS %d%%\033[0;35m $$$$$$$   \n", d);
            printf("\t\t\t\t    $$$$$$$$$$$$$$$$$$$     \n");
            printf("\t\t\t\t      $$$$$$$$$$$$$$$       \n");
            printf("\t\t\t\t        $$$$$$$$$$$         \n");
            printf("\t\t\t\t          $$$$$$$           \n");
            printf("\t\t\t\t            $$$             \n");
            printf("\t\t\t\t             $              \n");
            printf("\033[0m");
        }

        else if(z[x]==4&&z[x+1]==6 || z[x]==1 &&z[x+1]==7 || z[x]==10&&z[x+1]==4 || z[x]==5&&z[x+1]==3 || z[x]==2&&z[x+1]==6 || z[x]==3&&z[x+1]==9 || z[x]==3&&z[x+1]==10 || z[x]==3&&z[x+1]==1 || z[x]==11&&z[x+1]==5 || z[x]==11&&z[x+1]==9 || z[x]==8&&z[x+1]==6 || z[x]==7-z[x+1]==3 || z[x+1]==4&&z[x]==6 || z[x+1]==1 &&z[x]==7 || z[x+1]==10&&z[x]==4 || z[x+1]==5&&z[x]==3 || z[x+1]==2&&z[x]==6 || z[x+1]==3&&z[x]==9 || z[x+1]==3&&z[x]==10 || z[x+1]==3&&z[x]==1 || z[x+1]==11&&z[x]==5 || z[x+1]==11&&z[x]==9 || z[x+1]==8&&z[x]==6 || z[x+1]==7-z[x]==3)
        {
            d = rand()%11+80;
            printf("\033[0;35m");
            printf("\t\t\t\t     $$$$         $$$$      \n");
            printf("\t\t\t\t   $$$$$$$$     $$$$$$$$    \n");
            printf("\t\t\t\t $$$$$$$$$$$$ $$$$$$$$$$$$  \n");
            printf("\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
            printf("\t\t\t\t$$$$$ \033[0;33mTHE COMPABILITY\033[0;35m $$$$$ \n");
            printf("\t\t\t\t $$$$$$ \033[0;33mOF YOU TWO\033[0;35m $$$$$$$  \n");
            printf("\t\t\t\t  $$$$$$$ \033[0;33mIS %d%%\033[0;35m $$$$$$$   \n", d);
            printf("\t\t\t\t    $$$$$$$$$$$$$$$$$$$     \n");
            printf("\t\t\t\t      $$$$$$$$$$$$$$$       \n");
            printf("\t\t\t\t        $$$$$$$$$$$         \n");
            printf("\t\t\t\t          $$$$$$$           \n");
            printf("\t\t\t\t            $$$             \n");
            printf("\t\t\t\t             $              \n");
            printf("\033[0m");
        }

        else if(z[x]==5&&z[x+1]==9 || z[x]==7&&z[x+1]==9 || z[x]==2&&z[x+1]==10 || z[x]==2&&z[x+1]==12 || z[x]==12&&z[x+1]==4 || z[x]==6&&z[x+1]==10 || z[x]==8&&z[x+1]==12 || z[x]==11&&z[x+1]==7 || z[x]==9&&z[x+1]==1 || z[x]==1 &&z[x+1]==11 ||  z[x]==8&&z[x+1]==4 || z[x]==7&&z[x+1]==5 || z[x]==4&&z[x+1]==8 || z[x]==8&&z[x+1]==10 || z[x]==11&&z[x+1]==3 || z[x]==3&&z[x+1]==7 || z[x]==1 &&z[x+1]==5 || z[x+1]==5&&z[x]==9 || z[x+1]==7&&z[x]==9 || z[x+1]==2&&z[x]==10 || z[x+1]==2&&z[x]==12 || z[x+1]==12&&z[x]==4 || z[x+1]==6&&z[x]==10 || z[x+1]==8&&z[x]==12 || z[x+1]==11&&z[x]==7 || z[x+1]==9&&z[x]==1 || z[x+1]==1 &&z[x]==11 ||  z[x+1]==8&&z[x]==4 || z[x+1]==7&&z[x]==5 || z[x+1]==4&&z[x]==8 || z[x+1]==8&&z[x]==10 || z[x+1]==11&&z[x]==3 || z[x+1]==3&&z[x]==7 || z[x+1]==1 &&z[x]==5)
        {
            d = rand()%10+90;
            printf("\033[0;35m");
            printf("\t\t\t\t     $$$$         $$$$      \n");
            printf("\t\t\t\t   $$$$$$$$     $$$$$$$$    \n");
            printf("\t\t\t\t $$$$$$$$$$$$ $$$$$$$$$$$$  \n");
            printf("\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
            printf("\t\t\t\t$$$$$ \033[0;33mTHE COMPABILITY\033[0;35m $$$$$ \n");
            printf("\t\t\t\t $$$$$$ \033[0;33mOF YOU TWO\033[0;35m $$$$$$$  \n");
            printf("\t\t\t\t  $$$$$$$ \033[0;33mIS %d%%\033[0;35m $$$$$$$   \n", d);
            printf("\t\t\t\t    $$$$$$$$$$$$$$$$$$$     \n");
            printf("\t\t\t\t      $$$$$$$$$$$$$$$       \n");
            printf("\t\t\t\t        $$$$$$$$$$$         \n");
            printf("\t\t\t\t          $$$$$$$           \n");
            printf("\t\t\t\t            $$$             \n");
            printf("\t\t\t\t             $              \n");
            printf("\033[0m");
        }
    }
}

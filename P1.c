#include <stdio.h>
#include <time.h> //Zaman kütüphanesi, UNIX zamanını bize verir.
#include <stdlib.h>

int main(){
	int zarat1,zarat2;
    int zar1, zar2;
    int toplam;
    int puan;

    
    printf("2 Zar atin");
   	scanf("%d",&zarat1);
    
    srand(time(NULL));
    
    for(int i = 0; i < 1; i++){
       
        zar1 = 1+(rand()%6);
        zar2 = 1+(rand()%6);
        toplam = zar1 + zar2;
        
        printf("Zar1 : %d ve Zar2 : %d \n",zar1,zar2);
        printf("Zarlarin Toplami: %d \n",toplam);
    }
    switch(toplam){
    	case 7:
    	case 11:
    	printf("kazandiniz");
    	break;
    	case 2:
    	case 3:
    	case 12:
    	printf("kaybettiniz");
    	break;
    	default:
		puan=toplam;
		printf("Oyuncunun kazanacagi zar:%d\n",puan);
		break;
}
	switch(toplam){
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:		
	
	printf("2 Zar atin");
   	scanf("%d",&zarat1);
    
    srand(time(NULL));
    
    for(int i = 0; i < 1; i++){
       
        zar1 = 1+(rand()%6);
        zar2 = 1+(rand()%6);
        toplam = zar1 + zar2;
        
        printf("Zar1 : %d ve Zar2 : %d \n",zar1,zar2);
        printf("Zarlarin Toplami: %d \n",toplam);
    }
    if (toplam==puan){
    	printf("sayiyi tutturdun!");
	}
	else{
		for(int i = 0; i < 1; i++)
	       
	        zar1 = 1+(rand()%6);
	        zar2 = 1+(rand()%6);
	        toplam = zar1 + zar2;
	        
	        printf("Zar1 : %d ve Zar2 : %d \n",zar1,zar2);
	        printf("Zarlarin Toplami: %d \n",toplam);
	        if (toplam==puan){
    	printf("sayiyi tutturdun!");
							}
		}
	}
	return 0;
	}

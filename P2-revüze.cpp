#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int zarAt(void);
int main()
{
int oyunSonucu,toplam,oyuncuPuani;
srand(time(NULL));
toplam=zarAt();
switch(toplam)
{
case 2:
case 3:
case 12:
oyunSonucu=2;
break;
case 7:
case 11:
oyunSonucu=1;
break;
default:
oyunSonucu=0;
oyuncuPuani=toplam;
printf("Oyuncunun kazanacagi zar:%d\n",oyuncuPuani);
break;

}
while(oyunSonucu==0)
{
toplam=zarAt();
if(toplam==oyuncuPuani)
oyunSonucu=1;
else if(toplam==7)
oyunSonucu=2;
}
if(oyunSonucu==1)
printf("Oyuncu kazanir!\n");
else
printf("Oyuncu kaybeder!\n");
return 0;
}

int zarAt(void)
{
int zar1,zar2,toplamZar;
zar1=1+(rand()%6);
zar2=1+(rand()%6);
toplamZar=zar1+zar2;
printf("Oyuncu %d + %d = %d atti\n",zar1,zar2,toplamZar);
return toplamZar;

}
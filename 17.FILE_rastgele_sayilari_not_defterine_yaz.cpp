#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
//sayilar.txt dosayýsýný oluþturup 0 dan 1000e kadar 100 tane sayi yazdýrýlacak

main(){

FILE *dosya = fopen("sayilar.txt","w");
if(dosya==NULL){
	printf("dosya olusturulamadi.");
	return 0;
}

srand(time(NULL));

for(int i=0;i<100;i++){
	fprintf(dosya,"%d ",rand()%1000);
	
}
printf("islem tamamlandi.");
fclose(dosya);

getch();
return 0;


}



#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
    
main(){
	FILE *fw0=fopen("sayilar0.txt","a");
	FILE *fw1=fopen("sayilar1.txt","a");
	srand(time(NULL));
	int temp;
	for(int i=0;i<100;i++){
		temp=rand()%100; 
		if((temp & (1<<4)) == 0) // 4 olmas�n�n sebebi ba�lang�� bitini 1. bitten ba�lamam ve 4 sola kayd�rd���nda 5. bite denk gelmesi 
		{
			temp=(temp | (1<<3)); // ayn� �ekilde 4. bitini 1 yap�yoruz
			fprintf(fw0,"%d ",temp);

		}
		else if((temp & (1<<4))){ // ayn� �ekilde
			temp=(temp & ~(1<<2)); // ayn� �ekilde 3.bitini 0 yap�yoruz
			fprintf(fw1,"%d ",temp);
		}
	}
	printf("islem tamamlandi.");
	fclose(fw0);
	fclose(fw1);
	return 0;
	
}

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
		if((temp & (1<<4)) == 0) // 4 olmasýnýn sebebi baþlangýç bitini 1. bitten baþlamam ve 4 sola kaydýrdýðýnda 5. bite denk gelmesi 
		{
			temp=(temp | (1<<3)); // ayný þekilde 4. bitini 1 yapýyoruz
			fprintf(fw0,"%d ",temp);

		}
		else if((temp & (1<<4))){ // ayný þekilde
			temp=(temp & ~(1<<2)); // ayný þekilde 3.bitini 0 yapýyoruz
			fprintf(fw1,"%d ",temp);
		}
	}
	printf("islem tamamlandi.");
	fclose(fw0);
	fclose(fw1);
	return 0;
	
}

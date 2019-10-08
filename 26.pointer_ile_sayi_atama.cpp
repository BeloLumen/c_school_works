#include<stdio.h>
#include<time.h>
#include<stdlib.h>

main(){
	srand(time(NULL));
	int *dizi,*dizi2;
	int sayac=0;
	dizi=(int*)malloc(sizeof(int)*100);
	dizi2=(int*)malloc(sizeof(int));

	for(int i=0;i<100;i++){
		*(dizi+i)=rand()%100;//rasgele 100 tane sayi atýyoruz
	}
	
	for(int i=0;i<100;i++){
		if((*(dizi+i) & (1 << 4))==0){//5. biti 1 olanlarýný iþleme alýyoruz
			dizi2=(int*) realloc(dizi2,sizeof(int) * (sayac+1));//yeniden boyutlandýrýp boyutunu artýroyruz pointer dizimizin
			*(dizi2+sayac)=*(dizi+i);
			sayac++;
		}
	}
	
	for(int i=0;i<sayac;i++){
		printf("%d ",*(dizi2+i));
	}

	
}

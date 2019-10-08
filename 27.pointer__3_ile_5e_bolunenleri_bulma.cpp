#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main(){
	int *dizi,*dizi2,sayac=0,sayi;
	dizi=NULL;
	while(1){
		
		printf("sayi giriniz:");
		scanf("%d",&sayi);
		if(sayi<0)break;
		else
		{
			if(sayi%3==0 && sayi%5==0){
				dizi=(int*)realloc(dizi,sizeof(int)*(sayac+1));
				*(dizi+sayac)=sayi;
				sayac++;
			}
		}
		
}
	printf("3 ve 5 e bolunen sayilar:\n");
		for(int a=0;a<sayac;a++)
		printf("%d ",*(dizi+a));
}

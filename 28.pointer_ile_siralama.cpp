#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void select(int *dizi,int boyut){
	
	int enk,i,j,temp=0;
    for(i=0;i<boyut-1;i++){
    	enk=i;
    	for(j=i+1;j<boyut;j++){
    		if(*(dizi+enk)>*(dizi+j)){
    			enk=j;
			}
		}
		temp=*(dizi+enk);
		*(dizi+enk)=*(dizi+i);
		*(dizi+i)=temp;
	}
}
main(){
	int *dizi,sayac=0,sayi;
	dizi=NULL;
	while(1){
		dizi=(int*)realloc(dizi,sizeof(int)*sayac+1);
		printf("sayi giriniz:");
		scanf("%d",&sayi);
		if(sayi<0)break;
		else{
			*(dizi+sayac)=sayi;
			sayac++;
			
		}
		
	}
	
	select(dizi,sayac);
	printf("kucukten buyuge siralanisi:\n");
	for(int i=0;i<sayac;i++){
		printf("%d ",*(dizi+i));
	}
}
